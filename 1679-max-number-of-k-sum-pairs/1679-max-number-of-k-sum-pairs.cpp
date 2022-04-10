class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        int count = 0;
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            int t = k-nums[i];
            if(m.find(t) != m.end()){
                auto it = m.find(t);
                if(it->second > 0){
                    cout << i << " ";
                    count++;
                    it->second--;
                }
                else{
                    m[nums[i]]++;
                }
            }
            else {
                m[nums[i]]++;
            }
        }        
       return count;         
    }
};


/*
    O(N log N)
    
        int n = nums.size();
        int l=0, r=n-1;
        int count = 0;
    
        sort(nums.begin(),nums.end());
        while(l<r){
            if(nums[l] + nums[r] == k){
                count++;
                l++; 
                r--;
            }
            else if(nums[l] + nums[r] > k) r--;
            else l++;
        }
        return count;

*/