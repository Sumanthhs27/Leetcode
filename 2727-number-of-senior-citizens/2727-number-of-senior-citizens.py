class Solution:
    def countSeniors(self, details: List[str]) -> int:
        res = 0
        return sum([1 if int(detail[11:13]) > 60 else 0 for detail in details ])
    