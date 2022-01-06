#include <iostream>
#include <string>

using namespace std;

void isZigzag(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    if( (sum - n/2 - 1)%n == 0) {
        cout << "Can Be converted to zigzag array" << endl;

        int a = (sum - n/2 -1)/n;
        
        int twice_sum_of_k = 0;

        for(int j=0; j<n; j++){
            if(j%2 == 0) twice_sum_of_k = twice_sum_of_k + abs(arr[j] - (a+1));
            else twice_sum_of_k = twice_sum_of_k + abs(arr[j] - a);
        }
        cout << "Minimum sum of k for all moves is: " << twice_sum_of_k/2 << endl;
    }
    else cout << "Can't be converted to zigzag";
}


int main() {
    int n{};
    cout << "Enter array size: " ;
    cin >> n;
    if(n%2 == 0) {return 0;}
    int arr[n] {};
    cout << "Enter array elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    isZigzag(arr,n);
    return 0;
}
