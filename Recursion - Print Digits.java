Given a natural number N, your task is to print the digits of the number as shown in the example.
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function Print_Digit() that takes integer N as a parameter.

Constraints:-
1 <= N <= 10000000
Output
Print the digits of the number as shown in the example.

Note:- Print all digits in lowercase English letters


CODE 


static void Print_Digits(int N){
 
    String s = String.valueOf(N);
    // System.out.print(s);

    char[] arr = s.toCharArray();

    int l = arr.length;
    for(int i=0; i<l; i++){
        if(arr[i] == '1'){
            System.out.print("one " );
        }
        else if(arr[i] == '2'){
              System.out.print("two ");
        }
         else if(arr[i] == '3'){
              System.out.print("three ");
        }
         else if(arr[i] == '4'){
              System.out.print("four ");
        }
         else if(arr[i] == '5'){
              System.out.print("five ");
        }
         else if(arr[i] == '6'){
              System.out.print("six ");
        }
         else if(arr[i] == '7'){ 
              System.out.print("seven ");
        }
         else if(arr[i] == '8'){
              System.out.print("eight ");
        }
         else if(arr[i] == '9'){
              System.out.print("nine ");
        }
         else if(arr[i] == '0'){
              System.out.print("zero ");
        }
    }




















// System.out.println(value(N));
}

// static String value(int n){
    
//     if(n == 0){
//         return " ";
//     }

//     String s = " ";
//     int digit = n%10;

//     if(digit == 1){
//         s = "one ";
//     }
//     else if(digit == 2){
//         s = "two ";
//     }
//      else if(digit == 3){
//         s = "three ";
//     }
//      else if(digit == 4){
//         s = "four ";
//     }
//      else if(digit == 5){
//         s = "five ";
//     }
//      else if(digit == 6){
//         s = "six ";
//     }
//      else if(digit == 7){
//         s = "seven ";
//     }
//      else if(digit == 8){
//         s = "eight ";
//     }
//      else if(digit == 9){
//         s = "nine ";
//     }
//      else if(digit == 0){
//         s = "zero ";
//     }
//    System.out.print(s);
//     return  value(n/10);
    


// }
