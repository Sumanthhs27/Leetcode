class Solution {
public:
    
    int hrs_req(vector<int> &piles, int speed){
        int hrs = 0;
        int j=0;
        
        while(j<piles.size()){
            if(piles[j]%speed != 0) hrs += piles[j]/speed + 1;
            else hrs += piles[j]/speed;
            j++;
        }
        
        return hrs;      
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        long long sum=0;
        for(int x:piles) sum +=x;
        
        int mid;
        int l = sum/h; 
        int r = *max_element(piles.begin(),piles.end());
        if(sum%h != 0) l++;
        
        while(l<r){
            mid = (l+r)/2;
            if(hrs_req(piles,mid) > h) l = mid+1;
            else r = mid;
        }
        return l;
    }
};