Longest(String str,int start,int end){
    if(start==end)
      return 1;
    else if(str.charAt(start)==str.charAt(end))
     return 1+Longest(str,start+1,end-1);
    else
       return max(Longest(str,start+1,end),Longest(str,start,end-1));

}


    cnt++ , 
    max = math.max(max , cnt);
}
else{
    cnt = 0;
    left += 1;
    right -= 1;
}

}

