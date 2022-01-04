class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m-1;
        int j = max(n-1,0);
        if(n == 0) return;
        int k = m+n-1;
  
        while(j>=0){
            if(i >= 0){
                if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];      
                }
                else if(nums1[i] <= nums2[j]){
                nums1[k--] = nums2[j--];
                }
            }
            else{
                nums1[k--] = nums2[j--];
            }
            
        }
        
        for(int i=0; i<m+n ; i++){
            cout << nums1[i] << " ";
        }
    }
};