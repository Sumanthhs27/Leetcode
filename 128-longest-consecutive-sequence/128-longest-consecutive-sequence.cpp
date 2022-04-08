class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
          int n = nums.size();
        map<int,int>m,v;
        int ans = 0;
        for(int i=0;i<n;i++){
            m[nums[i]] = 1;
        }
        for(int i=0;i<n;i++){
            if(m.find(nums[i]-1) != m.end())
                continue;
            if(v.find(nums[i]) != v.end())
                continue;
            v[nums[i]] = 1;
            int len = 0;
            int x = nums[i];
            while(m.find(x) != m.end()){
                len++;
                x++;
            }
            ans = max(ans,len);
        }
        return ans;
        
        
       
    }
};


/*        MY SOLUTION 


    unordered_map<int,int> m;
        int count = 1;
        if(nums.size() == 0) return 0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] = 0;
        }
        
        for(int i=0; i<nums.size(); i++){
            int ele = nums[i];
            int b = 1;
            
            if(m[ele] == 0){
                while(m.find(ele-1) != m.end()){
                    b++;
                    m[ele-1] = 1;
                    ele -= 1;            
                }            
                count = max(count, b);
            }
                      
        }        
        return count;

*/