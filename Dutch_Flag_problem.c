
#include <stdio.h>     

void computeArray(int *,int);

int main(){
  // [1,2,3,2,1,2,3] --> [1,1,2,2,2,3,3]
  // x track 1 ; y track 2 ; z track 3

  // a[k] --> Array
  int A[] = {3,1};
  int b =  (sizeof(A)/4) - 1;
  //printf("%d",b);
  computeArray( A, b);

  
  

  for (int i = 0; i <= b; i++)
  {
    printf("%d ",A[i]);
  }
  
  return 0;
}


void computeArray(int A[],int size){
  int r = 0 , b =  size ; //b = 6
  int k = 0;//index

    while (k != b)
  {
    
    if(A[k] == 1)
    {
        int temp = A[r];
        A[r] = A[k]; 
        A[k] = temp;
        r++;
        k++;
    } else if(A[k] == 3)
    {
        int temp = A[b];
        A[b] = A[k]; 
        A[k] = temp;
        b--;
        if(A[k] == 1)r++;
        k++;
    }else{
      // A[k] == 2
      k++;
    }

   
  }
}
