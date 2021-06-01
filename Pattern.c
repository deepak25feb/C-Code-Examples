#include<stdio.h>
//#include<lib/conio.h>
int main()
{	
	int a  = 0, b = 0 , c = 0,num = 0;
	for(int i = 1 ; i <= 4 ; i++){
		for(int j = 1; j <= 7 ; j++){
			if((i+j) == 5 || (i+j) == 5+a || (i+j) == 5+b || (i+j) == 5+c  )
			printf("%d\t\t",++num);
			else printf("\t\t");
		}
		printf("\n");
		if(i == 1)a = 2;
		else if(i == 2)b = 4;
		else if(i == 3)c = 6;
	
	}
	return 0;
}
