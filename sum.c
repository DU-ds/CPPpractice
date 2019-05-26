#include <stdio.h>

int sum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main (int argc, char *argv[] )
{
    int x, y, z;
    x = 10;
    y = 0xa; // y = 10;
    z = 15;
    int sum1 = sum(x,y,z); //35
    printf("%i\n", sum1);
}

