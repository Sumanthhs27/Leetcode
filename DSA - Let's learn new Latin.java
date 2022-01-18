There are English words that you want to translate them into pseudo-Latin. To change an English word into pseudo-Latin word, you simply change the end of the English word like the following table.
English pseudo-Latin
-a -as
-i, -y -ios
-l -les
-n, -ne -anes
-o -os
-r -res
-t -tas
-u -us
-v -ves
-w -was
If a word is not ended as it stated in the table, put ‘-us’ at the end of the word. For example, a word “cup” is translated into “cupus” and a word “water” is translated into “wateres”.

Write a program that translates English words into pseudo-Latin words.
Input
The input starts with a line containing an integer, n, where n is the number of English words.
The next n lines contain n English words.
Words use only lowercase alphabet letters and each word contains at least 3 and at most 30 letters.

Constraints
1 <= n <= 20
Output
For an English word, print exactly one pseudo-Latin word in a new line.
  
  
  
  CODE 
  
  import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
    
    Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
 
  for(int i = 0; i<N; i++){

	String str = sc.next();
    int l = str.length();

	  String second = str.substring(l-1, l);
	  String third = str.substring(l-2, l);
	 
	  if(second.equals("y") || second.equals("i") ){
		System.out.println(str.substring(0,l-1) + "ios" ); 
	  }

	  else if( second.equals("a")){
	  System.out.println(str.substring(0,l-1) + "as" ); 
	  }

	   else if( second.equals("l")){
	  System.out.println(str.substring(0,l-1) + "les" ); 
	  }

	   else if( second.equals("o")){
	  System.out.println(str.substring(0,l-1) + "os" ); 
	  }

	  else if(second.equals("n")){
		
		System.out.println(str.substring(0,l-1) + "anes" ); 
	  }

	  else if(third.equals("ne") ){
	    System.out.println(str.substring(0,l-2) + "anes" ); 
	  }

	  else if( second.equals("r")){
	  System.out.println(str.substring(0,l-1) + "res" ); 
	  }

	  else if( second.equals("t")){
	  System.out.println(str.substring(0,l-1) + "tas" ); 
	  }

	  else if( second.equals("u")){
	  System.out.println(str.substring(0,l-1) + "us" ); 
	  }

	  else if( second.equals("v")){
	  System.out.println(str.substring(0,l-1) + "ves" ); 
	  }
	  else if( second.equals("w")){
	  System.out.println(str.substring(0,l-1) + "was" ); 
	  }
	  
	  else{
		   System.out.println(str + "us" ); 
	  }

   

      } 
	}
}
