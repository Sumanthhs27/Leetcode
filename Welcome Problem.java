RDX is playing a game with N people in his illegal house. Also given a number k, which indicates that after skipping k-1 persons the kth person will be thrown outside from the window in a valley.​
Uday Shetty is one of them and he has to choose the safe place in the circle so that when he performs these operations starting from 1st place in the circle, he will be the lone survivor. Uday is confused as to where to stand. Can you help him?
Input
User Task:
Since this is a functional problem, you don't have to worry about the input. You just have to complete the function given safe_Position() where you will get the below-mentioned arguments:
n: number of persons
k: k-1 number of the person to be skipped


Constraints:
1 <= T <= 100
1 <= k, n <= 20
Output
Return the safe position where Uday can stand in a circle statisfying above condition.
  
  
  CODE 
  
  
  public static int safe_Position(int n, int k)
{
    if (n == 1)
        return 1;
    else
        
        return (safe_Position(n - 1, k) + k - 1) % n + 1;
}
