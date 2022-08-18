class Solution {
public:
    void fn(int l_cnt, int r_cnt, int picked, string s, vector<string>& res, int n){
    if(picked == n && r_cnt == n){
        res.push_back(s);
        return;
    }
    
    if(picked < n){
        fn(l_cnt+1,r_cnt,picked+1,s+'(',res,n);
    }
    if(l_cnt > 0){
        fn(l_cnt-1,r_cnt+1,picked,s + ')',res,n);
    }
}
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
    string s = "";
    fn(0,0,0,s,res,n);
    //sort(res.begin(),res.end());
    return res;
    }
};