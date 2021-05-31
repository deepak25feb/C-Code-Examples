#include<stdio.h>

int main()
{	
	// input 1 2 3 
	//output : All Combination of 1 2 3
	int a=1,b=2,c=3,intermediate,i=0,counter = 0;
	printf("%d %d %d\n", a , b , c);
	while(1){
		if(counter == 6)break;
		//Exchange a b
		if(i==0){
		a = a+b;
		b = a-b;
		a = a-b;
		printf("%d %d %d\n", a , b , c);
		 i =1;
		 counter++;
		}else{
		//Exchange b c
		b = b+c;
		c = b-c;
		b = b-c;
		printf("%d %d %d\n", a , b , c);
		i = 0;
		counter++;
		}
	}
	
	return 0;
}
