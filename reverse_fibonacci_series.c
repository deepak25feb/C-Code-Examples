//Calculate Sum
# include <stdio.h>

int fibo(int , int , int);


int main()
{	
	int initial1 = 0 , initial2 = 1  , counter = 24 , start_result;
	start_result = fibo(initial1 , initial2 , counter);
	printf(" %d, 1 ",start_result);
	
	return 0;
}

int fibo(int num1 , int num2 , int counter){
	int result ;
	result = num1+num2;
	if(counter == 1 )return result; 
	printf("%d ,",fibo(num2 , result , --counter));
	return result;

}
