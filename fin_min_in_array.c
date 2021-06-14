#include<stdio.h>

int main()
{
	int a[25] = {3,4,8,4,3,1,2,65,41,5,
				 5,4,16,2,5,5,5,5,9,1,
				 25,5,5,5,0};

	//int counter = 0;
	int min = a[0],index = 0;
	for (int i = 0; i < 25; ++i)
	{
		if(a[i]<min){
			min = a[i];
			index = i;
		}
		
		
	}
	printf("Minimu : %d at Index : %d\n",min , index );
	//printf("%d",counter);
	return 0;
}
