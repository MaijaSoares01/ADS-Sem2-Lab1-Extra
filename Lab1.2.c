#include <stdio.h>

int main() {
    
    int num ;
    int num2;  
    int num3;  
    int avrg;
    printf("Enter three numbers to find the average: ");
    scanf("%d %d %d", &num, &num2, &num3);
    avrg = (num+num2+num3)/3;
    printf("The avarage of %d, %d, and %d is: %d\n",num,num2,num3,avrg);
    
}
