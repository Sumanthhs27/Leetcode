class Solution:
    """
    This way we are arranging the numbers in the format 
    SLSLSLS

    the middle element will either be smaller or larger than the neighbouring elements
    """

    def rearrangeArray(self, nums: List[int]) -> List[int]:
        nums.sort()
        i, j = 0, len(nums) - 1
        res = []

        while i < j:
            res.append(nums[i])
            res.append(nums[j])
            i += 1
            j -= 1
        
        if i == j:
            res.append(nums[i])
        return res
