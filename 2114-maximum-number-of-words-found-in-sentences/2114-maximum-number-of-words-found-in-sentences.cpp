class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
       int mxSpaces = 0;
        for(string words : sentences){
            int spaces = 0;
            for(char letter : words){
                if(letter == ' '){
                    spaces++;
                }
            }
            mxSpaces = max(spaces, mxSpaces);
        }
        return mxSpaces + 1;
        
    }
};