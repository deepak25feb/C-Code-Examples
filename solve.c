#include<stdio.h>
#include<math.h>

int main(/*int i*/){
	//Take Sum 
	// Convert into Denominator of
	// 100 , 50 , 10 , 5 , 2 , 1
	int inputNum , d100 , d50 , d10 , d5 ,d2 , d1 ,rem;
	
	//Taking Input
	printf("Input Num : ");
	scanf("%d",&inputNum);
	
	// inputNum/100 and store q into var d100
	d100 = inputNum/100;
	rem = inputNum % 100;
	d50 = rem/50;
	rem %= 50;
	d10 = rem / 10;
	rem %= 10;
	d5 = rem / 5;
	rem %= 5;
	d2 = rem / 2;
	rem %= 2;
	d1 = rem / 1;
	rem %= 1;
	
	printf("Demoniation of %d is \n %d * 100 = %d \n %d * 50 = %d \n %d * 10 = %d \n %d * 5= %d \n %d * 2 = %d \n %d * 1 = %d \n",inputNum,d100,d100*100,d50,d50*50,d10,d10*10,d5,d5*5,d2,d2*2,d1,d1*1);
	printf("\n\n %d ",(d100*100)+(d50*50)+(d10*10)+(d5*5)+(d2*2)+(d1*1));
	
	printf("Currency Notes Used : %d",d100+d50+d10+d5+d2+d1);
	
	return 0;
}