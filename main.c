#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
int operator;
float result,result2, value1, value2;
printf("case1 is addition\n");
printf("case2 is subtraction\n");
printf("case3 is division\n");
printf("case4 is power \n");
printf("case5 is multiplication\n");
printf("case6 is square root of second value\n\n");

printf("enter value1 and  value2: \n\n");
scanf("%f %f", &value1, &value2);

printf("enter the case\n");
scanf("%d",&operator);

    switch (operator) {
    case 1 : result = value1 + value2;
    break;
    case 2 : result = value2 - value2;
    break;
    case 3 : result = value1 / value2;
    break;
    case 4 : result = pow(value1,value2);
    break;
    case 5 : result = value1 * value2;
    break;
    case 6 : result2  = sqrt(value2);
    break;
    default : goto fail;

    }
    printf(" The result is:%f\n" ,result);
    printf(" The result2 is: %f" , result2);
    goto exit;
    fail: printf("operation invalid\n");
    exit:
         return 0;
}
