class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> s;
        
        for(int i=0; i<ops.size(); i++){
            if(s.empty()) s.push(stoi(ops[i]));
            else{
                if(isdigit(ops[i][ops[i].length()-1])) s.push(stoi(ops[i]));
                else{
                    if(ops[i] == "C") s.pop();
                    if(ops[i] == "D") s.push(2*s.top());
                    if(ops[i] == "+"){
                        int b = s.top();
                        s.pop();
                        int a = s.top();
                        int t = a + b;
                        s.push(b); 
                        s.push(t);
                    }
                }
            }
        }
        int res = 0;
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        return res;
    }
};