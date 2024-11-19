
#include <stdio.h>
#include <math.h>

int main()
{
    double y;
    int x = 2;
    y = sqrt(x);
    printf("%f, %lu", y, sizeof(y));
}