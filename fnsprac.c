#include <stdio.h>
int sum(int ,int);
int sum(int x ,int y){
    printf("The sum of the numbers is %d\n" , x+y);
}
int main() {
    int a =6; int b =7;
    sum(a,b);
    int c = 2; int d =3;
    sum(c,d);
 return 0;
}
