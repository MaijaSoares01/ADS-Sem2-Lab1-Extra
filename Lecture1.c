#include <stdio.h>

int main() {
    
    int number ;
    float num2;  //conversion character %f
    double num3;  //conversion character %lf
    printf("enter number: ");
    scanf("%d", &number);
    printf("The number is %-10d\n", number);
    
    printf("enter num3: ");
    scanf("%lf", &num3);
    printf("number is %d and num3 is %4.1lf\n", number, num3);
    
    return 0;
}
