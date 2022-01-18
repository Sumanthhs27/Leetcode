// You are given two arrays - value and frequency both containing N elements.
// There is also a third array C which is currently empty. Then you perform N insertion operation in the array. For ith operation you insert value[i] to the end of the array frequency[i] number of times.
// Finally you have to tell the kth smallest element in the array C.
// Input
// First line of input contains N.
// Second line contains N integers denoting array - value
// Third line contains N integers denoting array - frequency
// Fourth line contains single integer K.

// Constraints
// 1 <= N, value[i], frequency[i] <= 100000
// 1 <= k <= frequency[1] + frequency[2] +frequency[3] +........ + frequency[N]
// Output
// Output a single integer which is the kth smallest element of the array C.

CODE


//////////////////             MEMORY LIMIT EXCEEDED CODE           //////////////////////


import java.io.*;
import java.util.*; 


class Main {
	public static void main (String[] args) {
    
//////  TAKING INPUTS  ////////////////////////
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int[] value = new int[N];
	int[] freq = new int[N];

	for(int k = 0; k<N; k++){
		value[k] = sc.nextInt();
	}
	for(int k = 0; k<N; k++){
		freq[k] = sc.nextInt();
	}

	int K = sc.nextInt();
//////////////////////////////////////////////

	// Cummulative freq array //
	int[] c_freq = new int[N];


	int sum = 0;
	for(int x = 0; x<N; x++){
		c_freq[x] = sum;
		sum = sum + freq[x];
	}

	int[] newArray = new int[sum];

	for(int i = 0; i<N; i++){
		
		for(int j = c_freq[i]; j<c_freq[i] + freq[i]; j++){
			newArray[j] = value[i];
		}		
	}
	Arrays.sort(newArray);
	System.out.print(newArray[K-1]);
	
	}
}
