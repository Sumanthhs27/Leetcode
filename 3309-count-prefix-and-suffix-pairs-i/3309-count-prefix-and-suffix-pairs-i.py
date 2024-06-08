class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        

        res = 0

        for i in range(len(words)):
            for j in range(i+1,len(words)):

                if len(words[j]) < len(words[i]):
                    continue
                elif len(words[j]) == len(words[i]) and words[i] != words[j]:
                    continue
                else:
                    if words[j].startswith(words[i]) and words[j].endswith(words[i]):
                        res += 1
        
        return res