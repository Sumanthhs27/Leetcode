Given a number N, find the sum of all the digits of the number

Note: Use a recursive method to solve this problem.
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function Sum() that takes the integer N as a parameter.

Constraints:
1 ≤ T ≤ 100
0 ≤ N ≤ 1000000000
Output
Return sum of digits.
  
  
  CODE 
  
  static long  Sum(long  n) 
    { 
  
      if( n == 0){
        return 0;
      }
      return n%10 + Sum(n/10);




    }
