#include <stdio.h>

int main(void) {
    float fahr;
    float centigrade;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&fahr);

    centigrade = (5.0/9.0)*(fahr-32);
    printf("%3.0f degrees F, %6.1f degrees C\n", fahr,centigrade);
}
