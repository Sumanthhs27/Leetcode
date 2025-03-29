import heapq

class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        pooled_trips = []
        curr_distance = 0

        trips.sort(key = lambda x : (x[1], x[2]))
        # print(trips)

        for trip in trips:
            curr_distance = trip[1]
            passengers = trip[0]
            end_distance = trip[2]

            # If any trips ends, remove the trip and add passengers
            while pooled_trips and curr_distance >= pooled_trips[0][0]:
                removed_trip = heapq.heappop(pooled_trips)
                capacity += removed_trip[1]
            
            # Pick up passengers
            capacity -= passengers
            if capacity < 0:
                return False

            heapq.heappush(pooled_trips, (end_distance, passengers))

        return True



# [[3,1,6], [2,1,5],[3,3,7]]