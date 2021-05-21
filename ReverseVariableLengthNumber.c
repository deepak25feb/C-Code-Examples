#include<stdio.h>

int main(){
	int numy = 0,check = 1,counter = 0 , faceValue = 1 ,rem,result = 0;
	
	//Take User Input 
	printf("Enter Num : ");
	scanf("%d",&numy);
	int num = numy;
	//Calculate Digits 
	while(check){
		numy = numy/10;
		counter++;
		if(numy == 0){
			break;
		}
	}
	
	//Print Number of Digit 
	//printf("Digits : %d \n",counter);
	
	//Predict Face Value
	for(int i = 1 ; i < counter ; i++){
		faceValue *= 10;
	}
	//printf("Initial FaceValue : %d \n\n",faceValue);
	
	//Reverse Number
	for (; faceValue>0 ; faceValue /= 10){
		//printf("Current Iteration : %d \n",faceValue);
		rem = num % 10; //Getting the Last Digit
		//printf("Current Remainder : %d \n",rem);
		num /= 10; // Removing Last Digit from Num
		//printf("Current Number  : %d \n",num);
		result += (rem * faceValue); //revering logic
		//printf("Current Result  : %d \n",result);
		
	}
	
	printf("\n\nReverse Num : %d",result);
	return 0;
}