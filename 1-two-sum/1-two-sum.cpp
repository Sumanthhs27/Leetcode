class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        /*  Bruteforce  n^2 
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);                
                }
            }
        }
        
        */
        
        /* Slighlty Better  sorting + 2 pointer      n log n 
        
        sort(numms.begin(),nums.end());
        int i=0, j=nums.size()-1;
        
        while(i<j){
            if(nums[i] + nums[j] == target){
                res.push_back(i);
                res.push_back(j); 
            }
            else if(nums[i] + nums[j] > target) j--;
            else i++;
        }
        return res;
        
        */  
        
        //   OPTIMIZED  Using Hashmap   O(n)
        
        map<int,int> m;
        int temp;
        for(int i=0; i<nums.size(); i++){
            temp = target - nums[i];
            if(m.find(temp) != m.end()) {
                res.push_back(i);
                res.push_back(m[temp]);
                break;
            }
            else m[nums[i]] = i;
        }
        
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] == temp) {
        //         res.push_back(i);
        //         break;
        //     }
        // }       
        return res;
    }
};