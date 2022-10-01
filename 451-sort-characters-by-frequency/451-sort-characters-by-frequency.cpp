class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> m;
        for(char c : s) {
            m[c]++;
        }
        priority_queue<pair<int,char>> q;
        for(auto it=m.begin(); it!= m.end(); it++){
            int t = it->second;
            char c = it->first;
            q.push({t,c});
        }
        string res = "";
        while(!q.empty()){
            auto it = q.top();
            q.pop();
            char c = it.second;
            int freq = it.first;
            while(freq){
                res += c;
                freq--;
            }
        }
        return res;
    }
};