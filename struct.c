#include <stdio.h>
#include <string.h>

struct Auto
{
    char marke[50];
    int ps;
};

int equals(struct Auto *a1, struct Auto *a2)
{
    // Vergleiche Marken und ps
    if (strcmp(a1->marke, a2->marke) == 0 && a1->ps == a2->ps)
    {
        return 1; // Autos identisch
    }
    return 0; // Autos nicht identisch
}

int main()
{

    struct Auto auto1 = {"vw", 50};
    struct Auto auto2 = {"vw", 50};
    struct Auto auto3 = {"bmw", 100};

    if (equals(&auto1, &auto2))
    {
        printf("Auto 1 2 identisch.\n");
    }
    else
    {
        printf("Auto 1 2 nicht identisch.\n");
    }

    if (equals(&auto1, &auto3))
    {
        printf("Auto 1 3 identisch.\n");
    }
    else
    {
        printf("Auto 1 und 3 nicht identisch.\n");
    }
}
