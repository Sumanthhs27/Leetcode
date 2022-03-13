class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        // int sum=0;
        int toReturn = 0;
        int five=0, ten=0;
        
        
        for(int i=0; i<bills.size();i++){
            if(bills[i] == 5) five++;
            else if(bills[i] == 10) ten++;
            
            // sum += bills[i];
            
            toReturn = bills[i]-5;
            if(toReturn == 5){
                if(five>0) {five--; continue;}
                else return false;
            }
            if(toReturn == 15){
                if(ten>0 && five>0) {ten--; five--;}
                else if(five >=3) five -= 3;     
                else return false;
            }
            // sum -= toReturn;
            // if(sum < 0)return false;
        }
        return true;
    }
};