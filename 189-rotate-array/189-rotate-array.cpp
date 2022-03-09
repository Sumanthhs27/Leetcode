class Solution {
public:
    void reverse(vector <int> &nums, int l, int r){
        for(int i=l; i<=(l+r)/2; i++){
            swap(nums[i], nums[r-i+l]);
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size(); 
        k = k%n;
        reverse(nums,0,n-k-1);       
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
 
        
    }
};



/*  LAST SUBMITTED CODE  


TC - O(n)   SC - O(n)   (AC)

        int last;
        int n = nums.size();
        k = k%n;
        // for(int i=0; i<k; i++){
        //     last = nums[n-1];
        //     for(int j=n-1; j>0; j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = last;
        // }
        int arr[n];
        int index = k;
        for(int i=0; i<n; i++){
            if(index < n) arr[index++] = nums[i];
            else {
                index = index%n;
                arr[index++] = nums[i];                
            }
        }
        for(int i=0; i<n; i++){
            nums[i] = arr[i];
        }
        
        
        
        
TC - O(k*n)   SC - O(1)  (TLE) 
        
        int n = nums.size();
        int prev = nums[0];
        int temp;
        k = k%n;
        
        for(int j=0; j<k; j++){
            for(int i=0; i<n-1; i++){
                temp = nums[i+1];
                nums[i+1] = prev;
                prev = temp;
            }
            nums[0] = prev;
        }
        
        
TC - O(n)   SC - O(1)   
        
        
        
*/