class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        fives = tens = twenties = 0

        for i in bills:
            if i == 5:
                fives += 1
                continue
            elif i == 10:
                if fives:
                    fives -= 1
                    tens += 1
                else:
                    return False
            else:
                twenties += 1
                if tens and fives:
                    tens -= 1
                    fives -= 1
                elif fives >= 3:
                    fives -= 3
                else:
                    return False
        return True