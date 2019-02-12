#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 5)
    {
        int j = 0;
        while (j < 3)
        {
            printf("x ");
            j++;
        }

        printf ("\n");
        i++;
    }

    return (0);
}
