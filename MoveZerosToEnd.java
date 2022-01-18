import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for(int k=0; k<T; k++){
			int N = sc.nextInt();
			int[] arr = new int[N];
			for( int i=0; i<N ; i++){
				arr[i] = sc.nextInt();
			}

			int index =0;
			for(int i=0; i<N; i++){
				if(arr[i] != 0){
					arr[index] = arr[i];
					index++;
				}
			}
			while(index < N){
				arr[index] = 0;
				index++;
			}
			
			for(int a : arr){
				System.out.print(a + " ");
			}
			System.out.println(" ");
					
		}
			
		
	}
}
