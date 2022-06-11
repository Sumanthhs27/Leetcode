class Solution {
public:
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();      
        vector<int> res(n,0);
        sort(potions.begin(),potions.end());
         
        for(int i=0; i<n; i++){
            long long t = spells[i];
           if(t*potions[0] >= success){               res[i] = m;               continue;}
           if(t*potions[m-1] < success){              res[i] = 0;               continue;}
            
           int l=0,r=m-1;
            
            while(l<r){
                int mid = (l+r)/2;
                
                if(t*potions[mid] >= success) r = mid;
                else if(t*potions[mid] < success) l = mid + 1;
            }                                
            res[i] = m - l;
        }
        return res;
    }
};