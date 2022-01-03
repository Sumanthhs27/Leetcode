class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        bool flg = false;
        if(flowerbed[0] == 0){
            count++;
            flowerbed[0]++;
        } 
        for(int i=0; i<size-1; i++){
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i+1]++;
                count++;
            }
            else if(flowerbed[i] == 1 && flowerbed[i+1] == 1){
                count--;
                flowerbed[i]--;
            }
        }
        if(count >= n) flg = true;
        return flg;
    }
};