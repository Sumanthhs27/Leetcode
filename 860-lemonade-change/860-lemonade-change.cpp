class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int five=0, ten=0;
            
        for(int i=0; i<bills.size();i++){
            if(bills[i] == 5) five++;
            else if(bills[i] == 10) ten++;
            
            if(bills[i]-5 == 5){
                if(five>0) {five--; continue;}
                else return false;
            }
            if(bills[i]-5 == 15){
                if(ten>0 && five>0) {ten--; five--;}
                else if(five >=3) five -= 3;     
                else return false;
            }
        }
        return true;
    }
};