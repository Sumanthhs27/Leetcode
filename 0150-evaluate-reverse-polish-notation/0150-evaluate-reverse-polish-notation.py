class Solution:
    def evalRPN(self, s: List[str]) -> int:
        
        stack = []

        for i in s:
            if i == "+":
                a = stack.pop()
                b = stack.pop()
                stack.append(a+b)
            elif i == "-":
                b = stack.pop()
                a = stack.pop()
                stack.append(a-b)
            elif i == "*":
                a = stack.pop()
                b = stack.pop()
                stack.append(a*b)
            elif i == "/":
                b = stack.pop()
                a = stack.pop()
                stack.append(int(a/b))
            else:
                stack.append(int(i))
            
            # print(f"Stack - {stack}")
        return stack[0]

