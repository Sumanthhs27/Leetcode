#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    bool flg = true;
    for(int i=2; i<= sqrt(num); i++){
        if(num%i != 0) {
            flg = false; 
            break;
        }
    }
    return flg;
}

int main() {
 
 // TAKING INPUTS //
   int n {};
   cout << "Enter Array Size: " ;
   cin >> n;
   int arr[n] {};
   cout << "Enter array elements: " ;
   for(int i=0; i<n; i++) {cin >> arr[i];}

 // ACTUAL LOGIC //
   int cnt = 0;
    for(int i=0; i<n; i++){
       float a = (7 + sqrt(56*arr[i] - 7))/14;
       if(a - int(a) == 0){
           if(isPrime(arr[i]) == 0){
               cnt++;
           }
       }
    }
    cout << "Number of Centered Heptagonal Prime is: " << cnt ;
    return 0;
}
