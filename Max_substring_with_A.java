  String s = "ABBAAAB";

        int l = s.length();
        int count = 0;
        int max = 0;

        for(int i = 0; i<l; i++){
            if(s.charAt(i) == 'A'){
                count++;
                if(count > max){
                    max = count;
                }
            }
            else{
                count = 0;
            }
        }
        System.out.print(max);
