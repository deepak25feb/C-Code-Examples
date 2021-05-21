#include<stdio.h>
#include<math.h>

int main(/*int i*/){
	//Take Input 
	//Output : sum of First and Last Digit
	// Edge Case : -5874 or any negative Num
	int inputNum,check = 1,lastDigit,firstDigit; 
	printf("Enter Num : ");
	scanf("%d",&inputNum);
	printf("Number Given is %d",inputNum);
	lastDigit = inputNum%10;
	while(check){
		inputNum /= 10;
		if(inputNum/10 == 0){
			firstDigit = inputNum;
			break;
		}
			
	}
	
	printf("First Digit is %d and Last Digit : %d and Sum : %d",firstDigit,lastDigit,firstDigit+lastDigit);
	
	return 0;
}