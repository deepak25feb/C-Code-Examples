#include<stdio.h>	
//Understanding Source : https://www.youtube.com/watch?v=B-nqY6IYqVw&t=371s
void sort(int a[]);
int main()
{	
	int counter = 0;
	//Generating Unique 5 Element combination
	//Use : Check all efficacy of sorting algorithm.  
	for(int i = 1 ; i < 6 ; i++){
		for (int j = 1; j < 6; j++)
		{
			for(int k = 1 ; k < 6 ; k++){
				for(int y = 1 ; y < 6 ; y++){
					for(int z = 1 ; z < 6 ;z++){
						if(i==j||i==k||i==y||i==z|| j == k || j == y || j == z || k==y || k==z || y==z){
							continue;//Considering unique element
						}
						else {
							printf("Input : %d %d %d %d %d\n",i,j,k,y,z);
							int a[5] = {i,j,k,y,z}; //Array Creation
							sort(a); //Sort Function [Implicit Printf()]
							counter++; // Counting Iteration
							printf("\n"); //Break
						}
					}
				
				}
			}
		}
	}
	printf("Count : %d",counter);
	//
	//sort(a);
	return 0;
}

void sort(int a[5]){
	int min,index = 0; // min : Minimum Value at i ..... Index = index of min.

	for(int i = 0 ; i < 5 ; i++){
		min = a[i]; //Assuming current element as minimum element
		for (int j = i+1; j < 5; j++)
		{
			if(a[j]<min){ // checking if anyother element is minimum than the current minimum
				//Minimum Exist
				min = a[j]; //updating minimum
				index = j; // Noting down the current index for later swap
			}
		}
		//swap
		if(i==4)index =i; //Edge case for last element

		if(min==a[i]){
			// If current element is the only minimum in the whole array
		}else{
			//Swap the value between 
		a[index] = a[i];
		a[i] = min;
		}
		//Debugging Comments
		// for (int i = 0; i < 5; ++i)
		// {
		// 	printf("%d\t",a[i]);
		// }printf("\n");
	}
	// printf("\n");
	for (int z = 0; z < 5; ++z)
		{
			printf("%d\t",a[z]);
		}
		printf("\n");	
}
