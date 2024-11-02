class Solution:
    def asteroidCollision(self, A: List[int]) -> List[int]:
        
        n = len(A)
        stack = []

        for i in A:
            if not stack or i > 0 or i*stack[-1] > 0:
                stack.append(i)
                continue

            while stack and stack[-1] > 0:
                if stack[-1] == abs(i):
                    stack.pop()
                    break
                elif stack[-1] > abs(i):
                    break
                else:
                    stack.pop()
            else:
                stack.append(i)
        
        return stack

