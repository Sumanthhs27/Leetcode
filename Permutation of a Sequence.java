//////   QUESTION  ////////////

// You have a sequence p1, p2, p3..., pn which is a permutation of {1, 2, 3, ..., n}. You can do the following operation at most 1 time:
// Choose 2 indices i and j. Swap (pi, pj).
// Can you sort the permutation.
// Input
// The first line of the input contains an integer n, the number of elements in the permutation.
// The second line contains p1, p2, ..., pn.

// Constraints
// 2 <= n <= 100
// Output
// Output "YES" if it is possible to sort the permutation, else output "NO".




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

        for(int k =0; k<N; k++){
            arr[k] = sc.nextInt();
        }

        int count = 0;
        for(int i = 0; i<N; i++){
            if(arr[i] != i+1){
                count = count + 1;
            }
        }

         if(count == 2 || count == 0) {
            System.out.print("YES");
        }
        else {
            System.out.print("NO");
        }
	}
}
