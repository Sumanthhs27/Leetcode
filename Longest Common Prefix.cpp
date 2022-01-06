string longestCommonPrefix(vector<string>& strs) {
        int count = 0;
        int flg = 0;
        for(int i=0; i<strs[0].length(); ++i){
            
            for(int j=0; j<strs.size(); ++j){
                if(strs[j][i] != strs[0][i]){
                    flg = 1;
                    break;
                }
            }
            if(flg == 1){
                break;
            }
            count++;
        }
        return strs[0].substr(0,count);
      
    }
