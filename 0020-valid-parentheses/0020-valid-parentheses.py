class Solution:
    def isValid(self, s: str) -> bool:
        
        if len(s) == 1:
            return False

        stack = []

        for i in s:
            if len(stack) == 0:
                stack.append(i)
            else:
                if i == ")" and stack[-1] == "(":
                    stack.pop()
                elif i == "}" and stack[-1] == "{":
                    stack.pop()
                elif i == "]" and stack[-1] == "[":
                    stack.pop()
                else:
                    stack.append(i)

        return len(stack) == 0
        