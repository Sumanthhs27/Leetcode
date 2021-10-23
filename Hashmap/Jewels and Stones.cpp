class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char, int> jew;
        int result = 0;
        for(char i : jewels){
            jew[i] = 1;
        }
        
        for(char j : stones){
            if(jew.count(j) != 0) result++;
        }
        return result;
    }
};
