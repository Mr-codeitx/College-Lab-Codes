#include <stdio.h>

#define max 15

void main()
{
    int choice, top = -1, element, stack[max];
    do{    printf("1.PUSH \n2.POP \n3.DISPlAY \n");
        printf("enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (top == max - 1)
            {
                printf("Stack is full\n");
            }
            else
            {
                printf("enter the element\n");
                scanf("%d", &element);
                top++;
                stack[top] = element;
                printf("element pushed successfully\n");
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Umderflow\n");
            }
            else
            {
                int x = stack[top];
                printf("element is popped successfully\n");
                top--;
            }
        case 3:
            if (top == -1)
            {
                printf("stack is empty\n");
            }
            else
            {
                for (int i = 0; i <= top; i++)
                {
                    printf("%d\t", stack[i]);
                }
            }
        default:
            printf("enter the correct choice\n");
        }
        printf("do you want to repeat? Pres one \n");
        scanf("%d", &choice);
    }while (choice == 1);
   
    
}
