#include<stdio.h>
#include<stdlib.h>

int main() 
{ 	
	int digit,result = 0,local = 0,count = 0;
	//Find Armstrong Number
	for(int i = 0 ; i <= 500 ; i++){
	local = i;
	result = 0;
		//i --> Num
		while (1){
			
			digit = local%10;
			local /= 10;
			digit =  digit*digit*digit;
			result += digit;
			if(digit>i){
				//printf("--NUM %d breaked %d\n",i,digit);
				count++;
				break;
			}
			
			if(local==0)break;
		}
		if(i == result){
			printf("Sum of %d is %d\n",i,result);
		}
		
	
	}
	
	//printf("Total Count : %d",count);
	return 0;
	
 }