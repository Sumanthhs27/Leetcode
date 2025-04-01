class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        n = len(s)
        delta = [0]*n

        for i in shifts:
            start = i[0]
            end = i[1]
            direction = i[2]

            if direction == 1:
                delta[start] += 1
                if end + 1 < n:
                    delta[end+1] -= 1
            else:
                delta[start] -= 1
                if end + 1 < n:
                    delta[end+1] += 1

        for i in range(1,n):
            delta[i] += delta[i-1]
        
        # print(delta)
        res = ""
        for i in range(n):
            shifts = delta[i]
            new_char = chr((ord(s[i]) - ord('a') + shifts)%26 + ord('a'))
            res += new_char

        return res