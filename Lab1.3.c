#include <stdio.h>

int main() {
    char initial;
    int age;  
    float height;
    printf("Enter your first initial, age and height(feet) e.g. M    19   5.1 \n");
    scanf(" %c %d %f", &initial, &age, &height);
    printf("Personal Statistics\n===================\nIdentifier:         Age:         Height:\n%c%21d           %3.1f", initial, age, height);
}
