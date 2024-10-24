class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        

        res = 0
        found = False

        i = 0
        n = len(tickets)

        while not found:
            i = i%n

            if tickets[i] == 0:
                i += 1
            else:
                res += 1
                tickets[i] -= 1

                if i == k and tickets[i] == 0:
                    return res
                
                i += 1

        return res