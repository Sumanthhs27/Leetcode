class Solution {
public:
    void reverseString(vector<char>& s) {
        auto it = s.begin();
        auto it1 = s.end();
        --it1;
        while(it<it1){
            char temp = *it1;
            *it1 = *it;
            *it = temp;
            it++;
            --it1;
        }
        // for(int i=0; i<s.size(); i++){
        //     cout << s[i] << " ";
        // }
        
    }
};