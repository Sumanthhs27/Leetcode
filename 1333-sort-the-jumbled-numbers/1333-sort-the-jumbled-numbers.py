# class Solution:
#     def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
#         mp = []

#         for idx, num in enumerate(nums):
#             mapped_str = ""
#             for i in str(num):
#                 mapped_str += str(mapping[int(i)])

#             mapped_num = int(mapped_str)
#             mp.append([mapped_num, idx, num])
            
        
#         mp.sort(key = lambda x: (x[0], x[1]))
#         res = []
#         for i in mp:
#             res.append(i[2])
#         return res

class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        def get_mapped_number(num):
            return int(''.join(str(mapping[int(d)]) for d in str(num)))

        # Create tuples of (mapped_num, original_index, original_num)
        mp = [(get_mapped_number(num), idx, num) for idx, num in enumerate(nums)]

        # Sort by mapped number, then by original index
        mp.sort()

        # Return the original numbers in sorted order
        return [num for _, _, num in mp]