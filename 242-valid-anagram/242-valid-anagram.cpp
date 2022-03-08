class Solution {
public:
    bool isAnagram(string s, string t) {
        auto it = s.begin();
        auto it1 = s.end();
        auto it2 = t.begin();
        auto it3 = t.end();
        sort(it,it1);
        sort(it2,it3);
        return s == t;
        
    }
};