// Program to print all prime factors
# include <stdio.h>

void calculatePrimeFactor(int);


int main()
{
	int num;
	printf("Enter Num : ");
	scanf("%d",&num);
	num == 1 ? printf("1 ^ 1"):calculatePrimeFactor(num);
	
	return 0;
}


void calculatePrimeFactor(int input_num){
	
	for(int i = 2 ; i <= input_num ; i++){
		int counter = 0;
		if(input_num % i == 0){
			while(input_num % i == 0){
				counter++;
				input_num /= i ;
				//i = 2;
			}
			printf(" %d ^ %d ",i,counter);	
			i = 2;	
			if(input_num != 1)printf("x");
		}
		
	
	
	}


}
