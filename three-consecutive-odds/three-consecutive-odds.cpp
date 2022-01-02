class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        bool flg = false;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2 == 1) {
                count++; 
                if(count >=3){
                    flg = true;
                    break;
                }
            }
            else{
                count = 0;
            }
        }
        return flg;
    }
};