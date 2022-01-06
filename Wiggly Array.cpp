#include <iostream>

using namespace std;

int main() {

    int n {};
    cout << "Enter Array Size: " ;
    cin >> n;
    int arr [n] {};
    cout << "Enter array Elements: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        if(i%2 != 0){
            if(arr[i] < arr[i-1]){
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp; 
            }
        }
        else {
            if(arr[i] > arr[i-1]){
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;  
            }
        }
    }
    for( auto x : arr){
        cout << x << " ";
    }


    return 0;
}
