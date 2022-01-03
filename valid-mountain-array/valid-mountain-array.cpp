class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int inc = 0;
        int dec = 0;
        int flat = 0;
        bool result = false;
        int n = arr.size();
        if(n < 3) return false;
        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                return false;
            }
            if(arr[i] < arr[i+1]) {
                if(dec != 0) return false;
                else inc++;
            }
            if(arr[i] > arr[i+1]){
                if(inc == 0){
                    return false;
                }
                else dec++;
            }
        }
        if(dec > 0 ) result = true;
        return result;
    }
};