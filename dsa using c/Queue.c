#include <stdio.h>
#define max 100 
int main()
{
    int ch, queue[max],ele;
    int F=-1,R=-1;
 do{   printf("enter the choice ");
    printf("1. ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.Size");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        if(R==max-1){
            printf("OVERFLOW");
        }
        else{
            printf("Enter the element");
            scanf("%d",&ele);
            if(R == -1 && F == -1)
            {
               R++;
               F++;
               queue[R]=ele;
            }
            else{
                R++;
                queue[R]=ele;
            }
        }
        break;
    case 2:
         if(F==-1 && R==-1){
            printf("UNDERFLOW");
         }
         else{

            if(F==R!=-1)
            { printf("element deQueued %d",queue[R]);
              F==-1;
              R==-1;

            }
            else{
            int x = queue[F];
            printf("ELEMENT DEQUEUED %d",&x);
            F++;
            }
         }
         break;
    case 3:
         if(R==-1&&F==-1)
         {
            printf("underflow");
         }
         else{
            for(int i = F;i<=R;i++)
            {
               printf("%d ",queue[i]);
            }
         }
    break;
    case 4:
          if(R==-1 && F==-1)
          {
            printf("Underflow");
          }
          else
          { int count = 0;
            for(int i = F;i<=R;i++)
            {
               count++;
            }
            printf(" Sise of QUEUE is %d",count);
          }
      break;
    default: printf("INVALID CHOICE");
        break;
    }
printf("do you want to continue?(press 1)");
scanf("%d",&ch);
 }while(ch==1);
}