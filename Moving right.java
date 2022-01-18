Given an array of heights of N buildings in a row. You can start from any building and jump to the adjacent right building till the height of building to the right is less than or equal to the height of your current building. Find the maximum number of jumps you can make.
Input
First line of input contains a single integer N.
Second line of input contains N integers, denoting the array height.

Constraints:
1 <= N <= 100000
1 <= height[i] <= 1000000000
Output
Print the maximum number of jumps you can make.
  
 Sample Input
5
5 4 1 2 1

Sample Output
2

Explanation: We start from building with height 5 then jump right to building with height 4 then again to building with height 1 making total 2 jumps.
  
  
  CODE 
  
  
  import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
      Scanner sc= new Scanner(System.in);
       int N = sc.nextInt();
       int[] height = new int[N];

       for(int i=0; i<N; i++) {
           height[i] = sc.nextInt();
       }
    

	int jump =0;
	int prejump = 0;
	

	for(int i = 0; i<N-1;i++){

		if(height[i] >= height[i+1]){
			 jump = jump +1;   
		
			}   
			else{
				prejump = jump;
			
				jump = 0;
				
			}      
		 }
    if(prejump>jump){
		System.out.print(prejump);
	}
	else {
		System.out.print(jump);
	}


	}




	}
