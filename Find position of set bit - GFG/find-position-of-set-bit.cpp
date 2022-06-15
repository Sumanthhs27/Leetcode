// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        int p = N;
        int count = 0;
        while(N>0){
            count++;
            N = N&(N-1);
        }
        if(count != 1)  return -1;
        p -= 1;
        count = 0;
        while(p>0){
            p = p>>1;
            count++;
        }
        return count+1;
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends