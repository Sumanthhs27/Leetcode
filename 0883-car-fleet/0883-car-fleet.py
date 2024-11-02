class Solution:
    def carFleet(self, target: int, pos: List[int], speed: List[int]) -> int:
        
        times = [float((target - p)/s) for p, s in sorted(zip(pos, speed))]
        print(times)

        stack = []

        for i in range(len(pos)-1, -1, -1):
            if not stack:
                stack.append(times[i])
            else:
                if stack[-1] >= times[i]:
                    continue
                else:
                    stack.append(times[i])
        
        return len(stack)