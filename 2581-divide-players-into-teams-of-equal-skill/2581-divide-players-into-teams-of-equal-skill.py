class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        n = len(skill)
        teams = n//2
        skill_sum = sum(skill)

        if skill_sum % teams != 0:
            return -1

        team_skill = skill_sum//teams 
        skill.sort()
        i = res = 0
        j = n-1

        while i < j:
            if skill[i] + skill[j] != team_skill:
                return -1

            chemistry = skill[i] * skill[j]
            res += chemistry
            i += 1
            j -= 1

        return res