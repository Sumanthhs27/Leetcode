int romanToInt(string s) {
        int y {0};
        for (int i = 0; i<s.length(); i++){
            if(s[i] == 'M'){
                y = y+1000;
            }
            else if(s[i] == 'D'){
                y = y + 500;
            }
            else if(s[i] == 'C' && s[i+1] != 'D' && s[i+1] != 'M'){
                y = y + 100;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                y = y + 900;
                ++i;
            }
            else if(s[i] == 'C' && s[i+1] == 'D'){
                y = y + 400;
                ++i;
            }
             else if(s[i] == 'L'){
                y = y + 50;
            }
             else if(s[i] == 'X' && s[i+1] != 'L' && s[i+1] != 'C'){
                y = y + 10;
            }
            else if(s[i] == 'X' && s[i+1] == 'L' ){
                y = y + 40;
                ++i;
            }
            else if(s[i] == 'X' && s[i+1] == 'C' ){
                y = y + 90;
                ++i;
            }
            
             else if(s[i] == 'V'){
                y = y + 5;
            }
             else if(s[i] == 'I' && s[i+1] != 'V' && s[i+1] != 'X'){
                y = y + 1;
            }
            else if(s[i] == 'I' && s[i+1] == 'V'){
                y = y + 4;
                ++i;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                y = y + 9;
                ++i;
            }
            
            
        }
        return y;
    }
