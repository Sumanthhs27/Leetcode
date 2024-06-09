class Solution:
    def clearDigits(self, s: str) -> str:
        
        res = []

        for i in s:
            if i.isdigit():
                res.pop()
            else:
                res.append(i)
            
        print("".join(res))

        return "".join(res)