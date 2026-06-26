#include <stdio.h>

void greeting(const char *x){
    printf("Good %s\n" , x);
}
int main() {
      char *a = "Morning";
    greeting(a);
      char *b = "Afternoon";
    greeting(b);
     char *c= "Night";
    greeting(c); 
 return 0; 
}
