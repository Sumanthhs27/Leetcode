Given N coordinates on a two dimensional plane. Find the area of the smallest rectangle such that all the points can lie inside or on the rectangle boundary.
Note - the sides of rectangle should be parallel to x and y axis.
Input
First line of input contains N.
Next N lines contains two integers x[i] and y[i].

Constraints:
2 <= N <= 100000
0 <= x[i], y[i] <= 1000000000

Note the required rectangle will never have 0 area.
Output
Print the area of the smallest rectangle such that all the points can lie inside or on the rectangle the boundary.
  
  
  CODE 
  
  import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
        
     Scanner sc = new Scanner(System.in);

	 int N = sc.nextInt();

      int arr[][]=new int[N][2];
      for(int i=0; i<N; i++)
         {            
            for(int j=0; j<2; j++)
            {
                arr[i][j]=sc.nextInt();
            }
         }
  
  int max_x = -1;
		  for(int x=0; x<N; x++){
            for(int y=0; y<1; y++){
				if(arr[x][y] > max_x){
					max_x = arr[x][y];
				}
           
            }
            
          }
        //    System.out.print(max_x + " ");
       
	int min_x = 999999;
		  for(int x=0; x<N; x++){
            for(int y=0; y<1; y++){
				if(arr[x][y] < min_x){
					min_x = arr[x][y];
				}
           
            }
            
          }
        //    System.out.print(min_x + " ");   

	   int max_y = -1;
		  for(int x=0; x<N; x++){
            for(int y=1; y<2; y++){
				if(arr[x][y] > max_y){
					max_y = arr[x][y];
				}
           
            }
            
          }
        //    System.out.print(max_y +" ");

		   int min_y = 99999;
		  for(int x=0; x<N; x++){
            for(int y=1; y<2; y++){
				if(arr[x][y] < min_y){
					min_y = arr[x][y];
				}
           
            }
            
          }
        //    System.out.print(min_y);

long area = (max_x - min_x)*(max_y - min_y);
System.out.print(area);


	}
}
  
