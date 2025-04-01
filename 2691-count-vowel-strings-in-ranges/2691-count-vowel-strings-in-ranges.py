class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        
        prefix = [0]*(len(words)+1)

        def is_vowel_string(s):
            return s[0] in "aeiou" and s[-1] in "aeiou"

        for i in range(len(words)):
            if is_vowel_string(words[i]):
                prefix[i+1] = 1
            
            prefix[i+1] += prefix[i]
        
        # print(prefix)
        res = []
        for q in queries:
            s, e = q[0], q[1]
            res.append(prefix[e+1] - prefix[s+1-1])
        return res
            