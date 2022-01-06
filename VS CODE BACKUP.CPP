
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <chrono>
using namespace std::chrono;
using namespace std;

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// int main() {
//     int num;
//     std::cout << "Enter your Fav Num: ";
//     std::cin >> num; 
//     std::cout << "Amazing!! That's my fav too" << std::endl;
//     std::cout << "Not Really!! " << num << " is my fav number" << std::endl;
//     return 0;
// }

// int main () {
//     cout << "Enter your Fav Num: " << " Next sentence " << "\n";
//     int a,b;
//     cout << "Enter a & b: "; 
//     cin >> a >> b;     
//     cout << a << " and " <<  b;
//     return 0;
// }

// int main() {
//   int room_width, room_length;
//   cout << "Enter Room Width: ";
//   cin >> room_width;
//   cout << "Enter Room Lenght: " ;
//   cin >> room_length; 
//   cout << "Area of the room is " << room_width*room_length << " square feet" << endl;
//   return 0;
// }

// int main() {
//    const int small_room {25};
//    const int large_room {35};
//    int No_small_room {0};
//    int No_large_room {0};
//    cout << "Number of Small Rooms" << endl;
//    cout << "Number of Large Rooms" << endl;
//    cin >> No_small_room >> No_large_room ;
//    cout << "Estimate for Carpet cleaning service" << endl;
//    cout << "Number of Small Rooms: " << No_small_room << endl;
//    cout << "Number of Large Rooms: " << No_large_room << endl;
//    cout << "Price for small room: " << No_small_room*small_room << endl;
//    cout << "Price for large_room: " << No_large_room*large_room << endl;
//    cout << "Cost: " << No_large_room*large_room + No_small_room*small_room << endl;
//    cout << "Tax: " << (No_large_room*large_room + No_small_room*small_room)*0.06 << endl;
//    return 0;    
// }

// int main() {
//    char vowels [] {'a','e','i','o','u'};
//    int num [] {1,2,3,4,5};
//    cout << num[0] << "st Vowel is: " << vowels[0] << endl;
//    cout << num[1] << "st Vowel is: " << vowels[1] << endl;
//    cout << num[2] << "st Vowel is: " << vowels[2] << endl;
//    int a;
//    cout << "Which vowel do you want me to print: " << endl;
//    cin >> a; 
//    cout << a << "th Vowel is: " << vowels[a-1] << endl;
//    return 0;
// }

// int main() {
// //   int scores [10];
// //   cout << sizeof(scores) << endl;
// //   cout << "Enter 5 Test Scores" << endl;
// //   cin >> scores[0]; 
// //   cin >> scores[1];
// //   cin >> scores[2];
// //   cin >> scores[3];
// //   cin >> scores[4];
// //   cout << "Your scores are: " << scores[0] << " " << scores[1] << " " << scores[2] << " " << scores[3] << " " << scores[4] ;
//   return 0;
//   }
  
// int main() {
//   vector <int> scores (4);
//   cout << "Enter Vector Elements: " << endl;
//   cin >> scores[0];
//   cin >> scores[1];
//   cin >> scores[2];
//   cin >> scores[3];
//     for (int i = 0; i < scores.size(); i++) {
//         cout << scores[i] << " ";
//     }
//   return 0;
// }  

// int main() {
//   vector <int> v {1,2,3,4,5} ;
//   cout << v.size() << endl;
//   v.push_back(10);
//   cout << v[v.size() - 1] << endl;
//   return 0;
// }

// int main() {
//  vector <int> v1 ;
//  vector <int> v2 ;
//  v1.push_back(10);
//  v1.push_back(20);
//  cout << "Elements of V1 are: " << v1[0] << " and " << v1[1] << endl;
//  cout << "Size of Vector V1 is: " << v1.size() << endl;
//  int a,b;
//  cout << "Enter Elements to be added to Vector V2: " << endl;
//  cin >> a >> b;
//  v2.push_back(a);
//  v2.push_back(b);
//  cout << "Elements of V2 are: " << v2[0] << " and " << v2[1] << endl;
//  cout << "Size of Vector V2 is: " << v2.size() << endl;
//  vector <vector <int> > matrix;
//  matrix.push_back(v1);
//  matrix.push_back(v2);
//  cout << "Matrix is: " << matrix[0][1] << endl;
//  v1[1] = 1000;
//  cout << "Matrix is: " << matrix[0][1] << endl;
//  cout << "Elements of V1 are: " << v1[0] << " and " << v1[1] << endl;
// return 0;
// }

// int main () {
//    const float con_factor = 1.19;
//    cout << "US Dollars to EURO Conversion" << endl;
//    cout << "Enter Number of US Dollars: " << endl;
//    int a;
//    cin >> a; 
//    cout << a << " Dollars is " << a*con_factor << " Euros" << endl;
//    return 0;
// }

// int main() {
//     cout << "EXCHANGE COUNTER" << endl;
//     int a;
//     cout << "Enter Number of cents: " << endl;
//     cin >> a;
//     int Dollars, Quartars, Dimes, Nickels, Pennies;
//     Dollars = a/100;
//     a = a%100;
//     Quartars = a/25;
//     a = a%25;
//     Dimes = a/10;
//     a = a%10;
//     Nickels = a/5;
//     a = a%5;
//     Pennies = a/1;
//     cout << "We can provide you with this change: " << endl;
//     cout << "Dollars: " << Dollars << endl;
//     cout << "Quartars: " << Quartars << endl;
//     cout << "Dimes: " << Dimes << endl;
//     cout << "Nickels: " << Nickels << endl;
//     cout << "Pennies: " << Pennies << endl;
//     return 0;
// }

// int main() {
//    int P, tm, R;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);  
//     cin >> P >> R >> tm; 
//     int interest ;
//     interest = (P*R*tm)/100;
// 	return 0;
// }

// int main() {
//     vector <double> temp {25.2, 30.4, 40.9, 12.5} ;
//     double average_temp;
//     double sum = 0 ;
//     for ( auto x : temp ) {
//         sum = sum + x;
//     }
//     average_temp = sum/temp.size();
//     cout << average_temp << endl;
//     return 0;
// }

// int main() {
//      auto start = high_resolution_clock::now();
//      ios_base::sync_with_stdio(false);
//      cin.tie(NULL);
//      int num ;
//      cout << "Enter Number: " << endl;
//      cin >> num ; 
//      int temp = num;
//      int sum = 0;
//      while (num != 0 ) {
//        sum = sum + (num%10)*(num%10)*(num%10);
//        num = num/10;
//     }
//     if(sum == temp) {
//         cout << "Yes it is Armstrong Number!!" ;   
//     }
//    else {
//        cout << "Sorry!!" << endl;
//    }
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<milliseconds>(stop - start);
//    cout << duration.count() << endl;
//    return 0;
// }

// int main() {
//     // SIZE OF ARRAY 
//     int arr [5] ;
//     cout << "Enter Array Elements: " ;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0; i<size; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0; i<size; i++) {
//         cout << i << "th Element is: "<< arr[i] << endl;
//     }
//     return 0;
// }

// MESSAGE ENCRYPTER

// int main() {
//     string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//     string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
//     string message {};
//     cout << "Enter a secret message: " ;
//     getline(cin, message);
//     for(int i=0; i<message.size(); i++) {
//         int index = alpha.find(message[i]);
//         if(index >= 0){
//         message[i] = key[index];
//         }
//     }
//     cout << message ;
//     return 0;
// }

// PALINDROME STRING 

// int main() {
//     string str {};
//     int flg = 0;
//     getline(cin, str);
//     for (int i=0; i<= (str.length())/2; ++i){
//         if(str[i] != str[str.length() - 1 - i ]){
//             flg = 1;
//         }
//     }
//     if(flg == 0){
//         cout << "IT IS PALINDROME!!" ;
//     }
//     else {
//         cout << "NOPE IT'S NOT" ;
//     }
//     return 0;
// }

// AREA OF CIRCLE 

// float area (int radius) {
//     float are {};
//     are = M_PI*(pow(radius, 2));
//     return are;
// }
// int main() {
//     int r {};
//     cout << "Enter Radius: " ;
//     cin >> r ;
//     cout << area (r) << endl;
//     return 0;
// }

// FIBONACCI SERIES 

// int count = 1;
// void fib( int a, int b, int num){ 
//    if(num < count+2){
//        return;
//    }
//    else {
//        cout << a+b << " ";
//        count++;
//        return fib(b,a+b,num);
//    } 
// }
// int main() {
//     int n {};
//     cout << "Enter Number of elements: " ;
//     cin >> n ;
//     int a {0};
//     int b {1};
//     cout << a << " " << b << " " ;
//     fib(a,b,n); 
//     return 0;
// }

// 2 POINTER METHOD 

// int main() {
//     ///////////// Taking Inputs ////////////////
//     int n {};
//     int arr [n+1] {};
//     cout << "Enter the length of sorted array: " ;
//     cin >> n;
//     cout << "Enter sorted Array Elements: " ;
//     for(int k=0; k<n; k++ ){
//         cin >> arr[k];
//     }
//     int sum {};
//     cout << "Enter the sum: ";
//     cin >> sum;
//     /////////////////////////////////////
//     int i = 0; 
//     int j = n;
//     while(i<j){
//         if(arr[i] + arr[j] == sum){
//             cout << "Found" ;
//             break;
//         }
//         else if(arr[i] + arr[j] > sum){
//             j--;        
//         }
//         else if(arr[i] + arr[j] < sum){
//             i++;
//         }
//         else {
//             cout << "Not Found"; 
//         }
//     }
//     return 0;
// }

// Sorting Binary Array Elements

// void sorted(int arr [], int n){
//     int cnt = 0;
//     for(int k=0; k<n; k++){
//         if(arr[k] == 0){
//             cnt++;
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(i<cnt){
//             arr[i] = 0;
//         }
//         else arr[i] = 1;  
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int n; 
//     cout << "Enter array Size: "; 
//     cin >> n;
//     int arr [n] {} ;
//     cout << "Enter Array Elements: "; 
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     sorted(arr, n);
//     return 0;
// }

// int main() {
//     int n; 
//     cout << "Enter array Size: "; 
//     cin >> n;
//     int arr [n] {} ;
//     cout << "Enter Array Elements: "; 
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }  
//     for(int i=0; i<n/2; i++){
//         arr[i] = arr[i] + arr[n-1-i];
//         arr[n-1-i] = arr[i] - arr[n-1-i];
//         arr[i] = arr[i] - arr[n-1-i];
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

