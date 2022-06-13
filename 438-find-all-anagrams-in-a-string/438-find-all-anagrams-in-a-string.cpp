class Solution {
public:

    vector<int> findAnagrams(string s, string p) {
        int n = s.length(), m=p.length(),i=0,j=0;
        vector<int> res;
        if(m>n) return res;
        if(m==n && s==p) return {0};
        
        vector<int> p1 (26,0), s1 (26,0);
        
        while(j<m){   
            p1[p[j]-'a']++;
            s1[s[j]-'a']++;  
            j++;
        }
        j--;   
        while(j<n){         
            //if(isAnagram(p1,s1)) res.push_back(i);
            if(p1==s1) res.push_back(i);
            s1[s[i++] - 'a']--;
            j++; 
            if(j==n) break;
            else s1[s[j] - 'a']++;            
        }
        return res;
    }
};