class Solution {
public:
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        
        vector<int> result;
        for(int n:spells)
        {
            long idx  = (success+n-1)/n;
            auto it = lower_bound(potions.begin(),potions.end(),idx);
            result.push_back(potions.end() - it);
        }
        return result;
    }
};