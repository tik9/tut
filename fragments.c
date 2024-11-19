#include <stdio.h>

void int_fl()
{
    int x = 5;
    x += 7;
    float y = x / 2;
    printf("%d,fl %.1f\n", x, y);
}

int compare()
{
    int a = 10;
    int b = 20;

    if (a > b)
    {
        printf("Der größere Wert ist: %d\n", a);
    }
    else if (b > a)
    {
        printf("Der größere Wert ist: %d\n", b);
    }
    else
    {
        printf("Beide Werte sind gleich: %d\n", a);
    }

    return 0;
}

int main()
{
    compare();
    // int_fl();
}
