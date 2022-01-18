Given an array, sort the array in reverse order by simply swapping its adjacent elements.
Input
First line of the input contains an integer, N, which denotes the length of the array. Next N inputs are elements of the array that is to be sorted in descending order.

Constraints
1<=N<=1000
-10000<=Arr[i]<=100000
Output
Output sorted array in descending order where each element is space separated.
  
  
  CODE 
  
  
  import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
      
    Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();

	int[] arr = new int[N];

	for(int k = 0; k<N; k++){
		arr[k] = sc.nextInt();
	}


	for(int i = N-1; i>=0; i--){

		for(int j=N-1; j>N-1-i; j--){
			if(arr[j]>arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
			
		}

    }
	for(int z : arr){
		System.out.print(z + " ");
	}
	System.out.println(" ");
  }
}
