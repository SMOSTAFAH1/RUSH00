#include <stdio.h>
#include <unistd.h>

void rush(int x, int y)
{
    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            if (i == 1 && j == 1)
                printf("A");
            else if (i == 1 && j == x)
                printf("C");
            else if (i == y && j == 1)
                printf("C");
            else if (i == y && j == x)
                printf("A");
            else if (i == 1 || i == y)
                printf("B");
            else if (j == 1 || j == x)
                printf("B");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    rush(20, 7);
    return (0);
}
