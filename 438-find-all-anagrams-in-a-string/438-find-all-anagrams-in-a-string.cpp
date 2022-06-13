class Solution {
public:
    
    bool isAnagram(int p1[], int s1[]){
        for(int i=0; i<26; ++i){
            if(p1[i] != s1[i]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.length(), m=p.length(),i=0,j=0;
        vector<int> res;
        if(m>n) return res;
        if(m==n && s==p) return {0};
        
        int p1[26] = {0}, s1[26] = {0};
        
        for(char c : p)  p1[c - 'a']++;
       
        while(j<m){           
            s1[s[j++]-'a']++;    
        }
        j--;   
        while(j<n){         
            if(isAnagram(p1,s1)) res.push_back(i);
            s1[s[i++] - 'a']--;
            j++; 
            if(j==n) break;
            else s1[s[j] - 'a']++;            
        }
        return res;
    }
};