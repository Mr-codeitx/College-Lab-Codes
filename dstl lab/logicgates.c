// WAP to print truth table "AND","OR", & "NOT" Gate

#include <stdio.h>

int main()
{
    
    int c = 0, j, i;

    printf("\nThe truth table AND gate(&&) is\n");
    printf("A B : C = A&&B\n");
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (i == 0 && j == 0)
                {
                    c = 0;
                }
                else
                {
                    c = 1;
                }
                printf("%d\t%d\t%d\n", i, j, c);
            }
        }

    c = 0;
    printf("\nThe truth table OR gate(||) is\n");
    printf("A B : C = A||B\n");
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (i == 1 && j == 1)
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                }
                printf("%d\t%d\t%d \n", i, j, c);
            }
        }
     c = 0;
     printf("The truth table for NOT gate(!) is\n");
        for (int i = 0; i <= 1; i++)
        {
            if (i == 0)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
            printf("%d\t%d\n", i, c);
        }

     
    return 0;
}
