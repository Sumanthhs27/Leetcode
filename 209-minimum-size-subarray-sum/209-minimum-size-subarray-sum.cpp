class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int mini = INT_MAX;
        vector<int> p_sum (n,0);
        p_sum[0] = nums[0];
        
        for(int i=0; i<n; i++){
            if(nums[i] >= target) return 1;
            if(i==0) continue;
            p_sum[i] = p_sum[i-1] + nums[i];
        }
        
        for(int i =0; i<n; i++){
            cout << p_sum[i] << " ";
        }
        
        
        for(int i=0; i<n-1; i++){
            int l = i+1, r = n-1;
            int search = p_sum[i] - nums[i] + target;
            
            while(l<r){
                int mid = (l+r)/2;
                if(p_sum[mid] < search) l = mid + 1;
                else if(p_sum[mid] == search) {
                    mini = min(mini,mid-i+1);
                    break;
                }
                else if(p_sum[mid] > search) r = mid;
            }
            if(p_sum[l] >= search){
                mini = min(mini,l-i + 1);
            }
        }
        if(mini == INT_MAX) mini = 0;
        return mini;
    }
};