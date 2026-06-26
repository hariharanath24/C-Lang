#include <stdio.h>
    // Function prototype
    int sum(int, int);
    // Function defnition
    int sum(int x ,int y){
        printf("The sum is %d\n" , x+y);
    }
     int main() {
        int a=1 ; int b=2;
        sum(a,b);
        int c=3 ; int d=4;
        sum(c,d);
     
     return 0;
}
