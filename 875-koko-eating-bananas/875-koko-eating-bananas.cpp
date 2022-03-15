class Solution {
public:    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        long long sum=0;
        for(int x:piles) sum +=x;
        
        int l = sum/h; 
        int r = *max_element(piles.begin(),piles.end());
        if(sum%h != 0) l++;
        
        while(l<r){
            int mid = (l+r)/2;
            int hrs = 0;
            int j=0;
        
            while(j<n){
                if(piles[j]%mid != 0) hrs += piles[j]/mid + 1;
                else hrs += piles[j]/mid;
                j++;
            }
            
            if(hrs > h) l = mid+1;
            else r = mid;
        }
        return l;
    }
};