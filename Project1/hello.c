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

    return 0;




}