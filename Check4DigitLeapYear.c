#include<stdio.h>

int main() 
{ 	
	//input - 4 digit Year
	//output : Leap year or not
	int year,counter,realYear=0;
	
	
	while (1){
		printf("Enter Year : ");
		scanf("%d",&year);
		realYear = year;
			while(1){
				
					while(1) //This loop is for getting number of digit as we need only 4 digit
					{	
						
						year /= 10;
						counter++;
						if(year==0)
							{
								break; //get out from this while loop
							}		
					} // Inner while Loop Ends
				if(counter==4){ //if 4 Digit Num
					
					//Business Logic
					if(realYear%4==0 && realYear%100 != 0){
						//Leap Year
						printf("Leap Year! %d",realYear);
						break;
					}else if(realYear%4==0 && realYear%100 == 0 && realYear%400 ==0){
						//Leap Year
						printf("Leap Year! %d",realYear);
						break;
					}else{
						//Not a Leap Year
						printf("Not a Leap Year! %d",realYear);
						break;
					}
					
				}else{
					printf("INVALID INPUT TRY AGAIN \n");
					counter = 0;
					break; 
				}
			} // child while loop
		if(counter == 4){
			break;
		}
	} // parent While Loop
	//printf("Entered Year : %d",year);
	return 0;
 }
