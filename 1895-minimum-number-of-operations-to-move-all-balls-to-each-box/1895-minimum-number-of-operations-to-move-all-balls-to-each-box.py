class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        prefix, suffix = [0]*(n+1), [0]*(n+1) 

        ball_cnt = 0
        for i in range(n):
            ball_cnt += int(boxes[i])
            prefix[i+1] = prefix[i] + ball_cnt

        ball_cnt = 0
        for i in range(n-1, -1, -1):
            ball_cnt += int(boxes[i])
            suffix[i] = suffix[i+1] + ball_cnt

        # print(prefix)
        # print(suffix)
        res = []
        for i in range(n):
            res.append(prefix[i] + suffix[i+1])
        
        return res

        """
        0 1 2 2
          2 1 0 0
        
        0 1 3 5
          3 1 0 0 
        """