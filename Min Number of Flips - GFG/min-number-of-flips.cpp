// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S){
    char c = '1', p = '0';
    int cnt1 = 0, cnt2 = 0;
    
    for(int i=0;i<S.length();++i){
        if(i%2 != 0){
            if(S[i] != c) cnt1++;
        }
        else{
            if(S[i] != p)cnt1++;
        }
    }
    
    for(int i=0;i<S.length();++i){
        if(i%2 != 0){
            if(S[i] != p) cnt2++;
        }
        else{
            if(S[i] != c)cnt2++;
        }
    }
    return min(cnt1,cnt2);
}