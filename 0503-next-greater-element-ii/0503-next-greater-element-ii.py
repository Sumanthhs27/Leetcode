class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        
        nums = nums*2
        n = len(nums)
        stack = []
        res = []

        for i in range(n-1,-1,-1):
            if not stack:
                res.append(-1)
                stack.append(nums[i])
            
            else:
                if stack[-1] > nums[i]:
                    res.append(stack[-1])
                    stack.append(nums[i])
                    continue
                
                while stack and stack[-1] <= nums[i]:
                    stack.pop()
                
                if not stack:
                    res.append(-1)
                else:
                    res.append(stack[-1])

                stack.append(nums[i])
        res.reverse()
        return res[0:(n//2)]
