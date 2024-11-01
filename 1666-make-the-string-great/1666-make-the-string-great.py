class Solution:
    def makeGood(self, s: str) -> str:
        
        stack = []
        for i in s:
            if len(stack) == 0:
                stack.append(i)
            
            else:
                if stack[-1] == i:
                    stack.append(i)
                elif stack[-1].upper() == i or stack[-1] == i.upper():
                    stack.pop()
                else:
                    stack.append(i)
        
        return "".join(stack)