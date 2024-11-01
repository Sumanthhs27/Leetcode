class Solution:
    def calPoints(self, s: List[str]) -> int:
        
        stack = []
        res = 0

        for i in s:
            if i.isdigit() or i[0] == "-":
                stack.append(int(i))
                res += stack[-1]
            elif i == "C":
                res -= int(stack[-1])
                stack.pop()
            elif i == "D":
                res += int(stack[-1]*2)
                stack.append(stack[-1]*2)
            elif i == "+":
                a = stack[-1]
                b = stack[-2]
                stack.append(a+b)
                res += int(a+b)
            
            print(res)
        
        return res
        