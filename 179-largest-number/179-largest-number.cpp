class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string> s ;
        string res = "";
        for(auto i:nums) s.push_back(to_string(i));
        sort(s.begin(),s.end(), [](string& a, string& b){return a+b>b+a;});
        
        for(auto i : s) res += i;
        while(res[0]=='0' && res.length()>1)  res.erase(0,1);            
        return res;
    }
};
