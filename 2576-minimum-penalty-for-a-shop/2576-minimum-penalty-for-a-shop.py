class Solution:
    def bestClosingTime(self, cust: str) -> int:
        res = curr_y = curr_n = 0
        min_penalty = float("inf")
        cnt_y = cust.count("Y")
        cnt_n = cust.count("N")
        
        for i in range(len(cust)+1):
            curr_penalty = curr_n + cnt_y - curr_y
            if curr_penalty < min_penalty:
                min_penalty = curr_penalty
                res = i
            
            if i == len(cust):
                break
            if cust[i] == "Y":
                curr_y += 1
            else:
                curr_n += 1
            
        return res
