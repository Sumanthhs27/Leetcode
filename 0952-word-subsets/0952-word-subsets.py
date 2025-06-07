from collections import Counter
from typing import List

class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        required = Counter()
        for word in words2:
            word_count = Counter(word)
            for char in word_count:
                required[char] = max(required[char], word_count[char])
        result = []
        for word in words1:
            word_count = Counter(word)
            if all(word_count[char] >= required[char] for char in required):
                result.append(word)

        return result