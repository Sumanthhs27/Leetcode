class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        num = 0
        sign = '+'
        s = s.replace(' ', '')  # Remove all spaces
        
        for i, ch in enumerate(s):
            if ch.isdigit():
                num = num * 10 + int(ch)
            
            # If current char is an operator or we reached the end
            if ch in '+-*/' or i == len(s) - 1:
                if sign == '+':
                    stack.append(num)
                elif sign == '-':
                    stack.append(-num)
                elif sign == '*':
                    stack.append(stack.pop() * num)
                elif sign == '/':
                    prev = stack.pop()
                    # Python by default truncates towards negative infinity, so we correct it:
                    stack.append(int(prev / num))
                
                sign = ch
                num = 0

        return sum(stack)
