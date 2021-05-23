#include<stdio.h>
#include<math.h>

int main(/*int i*/){
	//Input : Num 
	// Output : Num_digit+1
	int inputNum,digitCounter = 0,face_value = 1,ones = 0,result = 0,num = 0;
	
	//Take Input Values 
	printf("Enter Num : ");
	scanf("%d",&inputNum);
	num = inputNum;
	//predict Digit
	while(1){
		digitCounter++;
		inputNum /= 10;
		if(inputNum==0){
			break;
		}
	}
	//printf("Digit : %d",digitCounter);
	
	//Generate 1s
	for(int i = 0 ; i<digitCounter ; i++){
		ones = face_value*1;
		result += ones;
		face_value *=10;
	}
	//printf("1s : %d",result);
	
	//Simple Addition 
	result = result + num;
	printf("Result is : %d",result);
	return 0;
}