#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 srand(time(NULL));
int a;
    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    printf("Guess the number generated: " , a);
    scanf("%d" , &a);
    if (a>randomNumber)
    {
       printf("Lower number please");
    }
    else if (a==randomNumber)
    {
        printf("You have successfully guessed the number");
    }
    else if (a<randomNumber)
    {
        printf("Higher number please");
    }
    return 0;
}
