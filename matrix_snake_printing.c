#include <stdio.h>
#include <stdbool.h>

// Input : mat[][] = {{1, 2, 3},  	(0,0)	(0,1)
//                   {4, 5, 6}, 	(1,0)	(1,1)
//                   {7, 8, 9}}		(2,0)	(2,1)
// Output : Row-wise: 1 2 3 4 5 6 7 8 9
//          Col-wise : 1 4 7 2 5 8 3 6 9
//			snake-wise : 1 4 7 8 5 2 3 6 9


#define ROW 3
#define COLUMN 3

int main()
{
	int matrix[ROW][COLUMN] = 
	{
		{1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}

	};
	int check = 1 ;
	for (int col = 0; col < COLUMN; ++col)
	{
		if(check){

			for (int row = 0; row < ROW; ++row)
			{
				printf("%d ",matrix[row][col]);
			}
			check = 0;
		}else{

			for (int row = (ROW-1); row >= 0; --row)	
			{
				printf("%d ",matrix[row][col]);
			}
			check = 1;
		}
	}

	return 0;
}

