class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n = nums.size();
        if(n < 3) return 0;
        
        vector<int> arr (n-1,0);
        for(int i=0; i<n-1; i++){
            arr[i] = nums[i] - nums[i+1];
        }
        int cnt = 1, res = 0;
        
        for(int i=0;i<n-2;i++){
            if(arr[i] == arr[i+1]) {
                cnt++;
            }
            else{
                res += (cnt*(cnt-1))/2;
                cnt = 1;
            }
        }
        res += (cnt*(cnt-1))/2;
        //for(int x : arr) cout << x << " " ;
        return res;
    }
};