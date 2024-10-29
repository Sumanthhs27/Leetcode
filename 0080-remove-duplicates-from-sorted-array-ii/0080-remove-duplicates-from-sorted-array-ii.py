class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        cnt = 1
        n = len(nums)

        idx = 0
        res = 1

        for i in range(1,n):
            print(f"comparing {nums[idx]} & {nums[i]} - cnt : {cnt} - idx : {idx}")
            if nums[i] != nums[idx]:
                idx += 1
                nums[idx], nums[i] = nums[i], nums[idx]
                print("swapped")
                print(nums)
                res += 1
                cnt = 1
            
            else:
                if cnt < 2:
                    res += 1
                    idx += 1
                    cnt += 1
                    nums[idx], nums[i] = nums[i], nums[idx]
                    print(nums)
        
        print(res)
        return res
                


