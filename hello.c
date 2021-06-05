//Calculate Sum
# include <stdio.h>



int prime_Factor(int);

int main()
{	
	int num , result;
	printf("Enter Num : ");
	scanf("%d",&num);
	result = prime_Factor(num);
	printf("%d",result);
	return 0;
}


int prime_Factor(int num){
int ii;
	if(num == 1 )return 1;
	for(int i = 2 ; i <= num ; i++){
		if(num%i == 0){
			printf(" %d x ",prime_Factor(num /= i));
			ii = i;
			break;
		}
	
	}
	return ii;
	
	


}

