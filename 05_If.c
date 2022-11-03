#include <stdio.h>

int main() {
// h:heads
//f:feet
//c:c
//r:r
//
// h = r+c
//f = r+2c
//
// r= h-c
//4r = 4h -4c
// f=4h-2c
//2c = 4h -f
//
// c =(4h-f)/2
// r= h-c


    int heads, feet, rabbits, chickens;

    printf("Enter number of #heads: ");
    scanf(" %d", &heads);
    printf("Enter number of #feet: ");
    scanf(" %d", &feet);
    printf("Log: #heads : %d , #feet: %d \n", heads, feet);

    if (heads < 0) { // 2^31-1 / 4
        printf("Invalid #heads input!\n");
        return 1;
    }
    if (heads > 500000000) {
        printf("Too many heads!\n");
        return 1;
    }
    if (feet < 0) {
        printf("Invalid #feet input!\n");
        return 1;
    }

    int x = feet < 2 * heads;
    int t = 4 * heads;
    int y = feet > 4 * heads;
    int z = feet % 2 == 1;

    int a = t +53;
    // f <2h or f > 4h or f is odd
    // 5 / 2 = 2
    // -5 / 2= -2
    if (feet < 2 * heads ||
        feet > 4 * heads ||
        feet % 2 == 1) {
        printf("Invalid #feet input!\n");
        return 1;
    }

    chickens = (4 * heads - feet) / 2; // division between ints : integer division = floored division ( + number
    rabbits = heads - chickens;
    if (rabbits > chickens) {
        printf("You are a rabbit person!\n");


    }
    else // rabbits <= chickens
    {
        if (rabbits < chickens) {
            printf("You are a rabbit person.\n");
        }
        else
        {
            printf("You are balanced.\n");
        }
    }
// if (...)
// {
// statement1;
//  }

// if (....)
// statement1;


    printf("#rabbits: %d , #chickens: %d", rabbits, chickens);

    return 0;
}
