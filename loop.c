
#include <stdio.h>

int main(void)
{
    for (int i = 20; i > 0; i--)
    {
        i -= 2;
        printf("i = %d; \n", i);
    }
}