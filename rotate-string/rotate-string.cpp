class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int times = n-1;
        bool flg = false;
        while(times > 0){
            char temp = goal[0];
            for(int i=0; i<n-1; i++){
                goal[i] = goal[i+1];
            }
            goal[n-1] = temp;
            times--;
            if(s == goal){
                flg = true;
            }
        } 
        
        return flg;
    }
};


string str = s+s;
        return str.find(goal) != string::npos;
