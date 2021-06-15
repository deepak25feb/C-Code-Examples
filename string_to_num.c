#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[5];
    scanf("%s",str);
    int len = strlen(str);
    int result = 0;
    char *p = str;
    int place_value = pow(10,(len-1) );
    while(*p != '\0')
    {
        int check = (int)*p;
        switch(check)
        {
            case 48:
                // num : 0
                result += 0*place_value;
                place_value /=10;
                p++;
                break;
            case 49:
            // num : 0
                result += 1*place_value;
                place_value /=10;
                p++;
                break;
            case 50:
            // num : 0
                result += 2*place_value;
                place_value /=10;
                p++;
                break;
            case 51:
            // num : 0
                result += 3*place_value;
                place_value /=10;
                p++;
                break;
            case 52:
            // num : 0
                result += 4*place_value;
                place_value /=10;
                p++;
                break;
            case 53:
            // num : 0
                result += 5*place_value;
                place_value /=10;
                p++;
                break;
            case 54:
            // num : 0
                result += 6*place_value;
                place_value /=10;
                p++;
                break;
            case 55:
            // num : 0
                result += 7*place_value;
                place_value /=10;
                p++;
                break;
            case 56:
            // num : 0
                result += 8*place_value;
                place_value /=10;
                p++;
                break;
            case 57:
            // num : 0
                result += 9*place_value;
                place_value /=10;
                p++;
                break;
        }
            
        
    }
        
    printf("%d\n",result );
        
    
    return 0;
}
