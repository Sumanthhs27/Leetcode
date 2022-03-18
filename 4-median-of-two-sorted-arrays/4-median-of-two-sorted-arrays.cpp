class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        // THIS IS  O((M+N)/2)  COMPLEXITY.   TRY TO GET  LOG(M+N)  // 
        
        int m = nums1.size();
        int n = nums2.size();
        int cnt = 0;
        int ele ;
        int i = 0, j = 0;
        int mid = (m+n)/2;
        double res = 0;
        
        while(cnt < mid){
            if(i < m && j < n){
                if(nums1[i] <= nums2[j]){
                    ele = nums1[i++];
                    cnt++;
                }
                else {
                    ele = nums2[j++];
                    cnt++;
                }
            }
            else if(i>= m && j < n){
                ele = nums2[j++];
                cnt++;
            }
            else if(i < m && j>= n){
                ele = nums1[i++];
                cnt++;
            }            
        }
        cout << i << " " << j <<  " " << ele << endl;
        
        if ((m+n)%2 == 0) {
            if (i < m && j < n) {
                res = (double)(ele + min(nums1[i],nums2[j]))/2;
            }
            else if(i>=m){
                res = (double)(ele + nums2[j])/2;
                cout << res;
            }
            else res = (double)(ele + nums1[i])/2;          
        }
        else{
            if (i < m && j < n) {
                res = (double)min(nums1[i],nums2[j]);
            }
            else if(i>=m){
                res = (double)nums2[j];
            }
            else res = (double)nums1[i];
        } 
        
        return res;
    }
};