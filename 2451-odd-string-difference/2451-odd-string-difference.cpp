class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, pair<int, string>> mp;
     for (auto w: words){
          string p;
          for (int j = 0; j + 1 < w.size(); j++)
              p += to_string((w[j + 1] - '0') - (w[j] - '0')) + " ";
          mp[p].first++;
          mp[p].second = w;
     }

     for (auto i: mp)
         if (i.second.first == 1) return i.second.second;

     return "";
        
    }
};