class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto end = digits.end()-1;
        auto begin = digits.begin();
        int borrow = 1;
        int flg = 1;
        for(auto i=end; i>= begin; i--){
            if((*i + borrow)/10 == 1){
                *i = 0;
                borrow = 1;
            }
            else{
                *i += 1;
                flg = 0;
                break;
            }                       
        } 
        if(flg == 1){
            digits.insert(begin,1);
        }
        return digits;
    }
};