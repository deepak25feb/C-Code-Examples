#include <math.h>
#include <stdio.h>

//Edge Cases : 0 , 0 or x , 0

int calculate_hcf(int , int);
//Calculate GCD
int main() {
    int num1 , num2 , result;
    printf("Enter Num : ");
    scanf("%d%d",&num1,&num2);
    result = calculate_hcf(num1,num2); 
    printf("HCF : %d",result);
    return 0;
}

int calculate_hcf(int num1 , int num2){
int rem ;
	while(1){
	rem = num1%num2;
	if(rem==0)break;
	num1 = num2;
	num2 = rem;
	}

	return num2;


}
