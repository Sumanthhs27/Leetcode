class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        
        """
        This can also be solved using Trie
        """
        prefix_map = {}
        for num in arr1:
            s = str(num)
            for i in range(1, len(s) + 1):
                prefix_map[s[:i]] = True

        max_len = 0
        for num in arr2:
            s = str(num)
            for i in range(1, len(s) + 1):
                if s[:i] in prefix_map:
                    max_len = max(max_len, i)
                else:
                    break

        return max_len
