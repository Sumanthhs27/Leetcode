class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        
        n = len(temp)
        res = []

        stack = []

        for i in range(n-1, -1, -1):

            if len(stack) == 0:
                stack.append([temp[i], i])
                res.append(0)

            elif stack[-1][0] > temp[i]:
                res.append(stack[-1][1] - i)
                stack.append([temp[i], i])

            else:
                while len(stack) > 0 and stack[-1][0] <= temp[i]:
                    stack.pop()

                if len(stack) == 0:
                    res.append(0)
                else:
                    res.append(stack[-1][1] - i)
                stack.append([temp[i], i])
            
        res.reverse()
        return res
            


