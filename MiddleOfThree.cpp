int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A<min(B,C))
  return min(B,C);
       
  if(B<min(A,C))
   return min(A,C);
       
    if(C<min(A,B))
    return min(B,A);
    }
