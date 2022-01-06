#include <iostream>
int main() {
   int num ;
   cout << "Enter Number: " << endl;
   cin >> num ; 
   int temp = num;
   int sum = 0;
   while (num != 0 ) {
       sum = sum + (num%10)*(num%10)*(num%10);
       num = num/10;
   }
     if(sum == temp) {
       cout << "Yes it is Armstrong Number!!" ;   
   }
   else {
       cout << "Sorry!!" ;
   }
   return 0;
}
