#include <stdio.h>
int main(){
    float accbal[5];
    float charge[] = { 0.0, 0.0, 0.0, 0.0, 0.0};
    float total;
    int i=0;
    for (i = 0; i < 5; i++) {
    printf("Enter a balance of an account %d:", i+1);
    scanf("%f",&accbal[i]);
    
    float bal = accbal[i];
    
    if (bal == -100.00)
    charge[i] = 10;
    else if (bal < -100.00 && bal > -500.00)
    charge[i] = 100;
    else if (bal < -500.00)
    charge[i] = bal * -2;
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
    total = accbal[i] - charge[i];
    printf("Account %d balance = %5.2lf, Service Charge = %5.2lf, total = %5.2lf\n",i, accbal[i], charge[i], total);
}
    return 0;
}
