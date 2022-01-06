#include <iostream>
using namespace std;

int cnt = 0;  // Variable to store the number of missing characters

void insert(char arr[] ,char str[], int n){

    int indx = 0;   // Variable to store missing index
    char missing ;  // Variable to store the character missing

 // Traversing the array to find the missing character and its index 
    for(int i=0; i<n; i++){
        if(str[i] != arr[i]){
            indx = i;
            missing = str[i];
            cnt++;     // Incrementing cnt value as we find missing character
            break;
        }
        else if (i == n-1) { return ;  }   // Return if all elements are equal 
    }

 // Pushing the elements to right by 1 position
    for(int j = n-8+cnt; j > indx; j--){
        arr[j] = arr[j-1];
    }
    arr[indx] = missing;        // Inserting the missing character at its index 

    return insert(arr, str, n);  // Recursively call the function till all elements in 'arr' array and 'str' array are same 
}

int main() {

    char arr [28] = "DTA STRCURES IT ROKE";
    char final[28] = "DATA STRUCTURES IIT ROORKEE";
    
    insert(arr, final, 28);

    cout << arr;
    return 0;
}


// char arr [27] = {'D','T','A',' ','S','T','R','C','U','R','E','S',' ','I','T',' ','R','O','K','E'};
    // char final[27] = {'D','A','T','A',' ','S','T','R','U','C','T','U','R','E','S',' ','I','I','T',' ','R','O','O','R','K','E','E'};
