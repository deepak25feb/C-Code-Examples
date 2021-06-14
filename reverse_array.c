#include<stdio.h>

#define SIZE1 5
#define SIZE2 6

int main( )
{
   //Compare Array index
	// a[5] = {0,1,2,3,4} // Odd Size == single 
	// a[6] = {0,1,2,3,4,5} // Even Size == no single
//--------------------------
	int a[SIZE1] = {0,1,2,3,4};
	int b[SIZE2] = {0,1,2,3,4,5};

	if(SIZE1%2 != 0){
		//Size is Even
		printf("SIZE is EVEN\n");

		for (int i = 0; i < SIZE1; ++i)
		{
			printf("%d ",a[i]);
		}
		printf("\n");

		int temp;
		
		int max_index = SIZE1-1;
		for (int i = 0; i < max_index ; ++i)
		{
			
			// printf("%d %d ", a[i] , a[max_index]);
			// max_index--;
			// if(max_index==2)printf("\t\tRemainder : %d\n",a[max_index] );
		
			temp = a[i];
			a[i] = a[max_index];
			a[max_index] = temp; 
			max_index--;

		}


		for (int i = 0; i < SIZE1; ++i)
		{
			printf("%d ",a[i]);
		}


	}else{
		//Size is odd
		printf("SIZE is ODD\n");

		for (int i = 0; i < SIZE2; ++i)
		{
			printf("%d ",b[i]);
		}
		printf("\n");


		int max_index = SIZE2-1;
		int temp;
		for (int i = 0; i <= max_index ; ++i)
		{
			temp = b[i];
			b[i] = b[max_index];
			b[max_index] = temp; 
			//printf("%d %d ", b[i] , b[max_index]);
			max_index--;
			
		}

		for (int i = 0; i < SIZE2; ++i)
		{
			printf("%d ",b[i]);
		}


	}



    return 0;
} 
