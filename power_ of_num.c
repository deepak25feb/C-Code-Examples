#include<stdio.h>
#include<stdlib.h>

int main() 
{ 	
	//Take 2 input : (2,3)
	//Output 2^3
	//Edge cases Negative Number , power -- 0
	int num1 , num2 ;
	float result = 1.0f;
	printf("Enter Num 1 and Num 2 : ");
	scanf("%d%d",&num1,&num2);
	//result = num1;
	if(num2>0){
		for(int counter = 0 ; counter < num2 ; counter++){
		result *= num1;
		}
		printf("Answer %d^%d is %f",num1,num2,result);
	}else{
	// num2 is negative
	num2 *= -1; //making num2 absolute
	for(int counter = 0 ; counter < num2 ; counter++){
		result *= 1.0/num1;  // Very imp 1.0 and not 1
		}
		printf("Answer %d^-%d is %f",num1,num2,result);
		
	
	}
	
	
	return 0;
	
 }
