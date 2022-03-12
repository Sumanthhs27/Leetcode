class Solution {
public:
    
    // Function that returns true if we can ship all containers by using max_weight in 'd' days
    
    bool isPossible(int d, int max_weight, vector<int> weights){
        
        int n = weights.size();
        int days = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            if(sum + weights[i] <= max_weight) sum += weights[i];
            else {
                days++;
                sum = weights[i];
            }
            if(days+1 > d) return false;          
        }
        
        return true;        
    }
        
    int shipWithinDays(vector<int>& weights, int days) {
        
        int l = *max_element(weights.begin(), weights.end());
        int r = 0;
        for(auto i : weights){
            r += i;
        }
                
        while(l<r){
            int mid = (l+r)/2;
            
            if(isPossible(days,mid,weights) && isPossible(days,mid-1,weights) == false) return mid;
            else if(isPossible(days,mid,weights) == false) l = mid+1;
            else if(isPossible(days,mid,weights) && isPossible(days,mid-1,weights)) r = mid;
        }
        return l;
    }
};