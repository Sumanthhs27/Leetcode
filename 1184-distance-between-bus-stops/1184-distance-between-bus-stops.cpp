class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int i=start, j=start;
        int left=0;
        int right=0;
        int n = distance.size();
        
        while(i!=destination){       
            i = (i-1+n)%n;
            left += distance[i];
        }
        
        while(j!=destination){
            right += distance[j];
            j = (j+1)%(n);
        }
        
        return min(right,left);
    }
};