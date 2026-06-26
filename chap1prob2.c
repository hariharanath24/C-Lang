#include <stdio.h>
int main() {
    float C;
    printf("Enter Temperature in Celsius: ");
    scanf("%f" , &C);
    printf("The temperature in F is %f" , C*1.8+32);
    return 0; 
}