#include <stdio.h>

int main(void)
{

    int num;

    scanf_s("%d", &num);


    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)printf(" ");

        for (int j = (num - i) * 2 - 1; j >= 1; --j)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < num; i++)
    {
        for (int k = num - 1; k > i; k--)printf(" ");

        for (int j = i * 2 + 1; j > 0; --j)
        {
            printf("*");
        }
        for (int k = num - 3; k > i; k--)printf(" ");
        printf("\n");
    }
    return 0;




}