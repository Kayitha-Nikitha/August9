#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;
int push(int);
int isfull(void);
int isempty(void);
void pop(void);

void main()
    {
        int ch, item;
        while(1)
            {
            printf("Different choices are:\n");
            printf("1.push\n");
            printf("2.pop\n");
            printf("3.exit\n");
            printf("enter your choice: ");
            scanf("%d",&ch);
            printf("your choice was: %d\n",ch);
                switch(ch)
                    {
                        case 1:
                                printf("\n\nenter element for push:");
                                scanf("%d",&item);
                                push(item);
                                break;
                        case 2: printf("\npop command is given\n");
                                pop();
                                break;
                        case 3: exit(0);
                        default: printf("invalid input\n");
                    }
                printf("\n");
                }
        }

push(int ele)
    {
        if(isfull())
            {
                printf("\nstack is overflow\n");
            }
        else
            {
            top++;
            stack[top]=ele;
            printf("\npushed element is %d\n",stack[top]);
            }
        }

isfull()
    {
     if(top==CAPACITY-1)
    {
        return 1;
    }
     else
    {
     return 0;
    }
}

isempty()
    {
        if(top==-1)
        {
           return 1;
        }
        else
        {
           return 0;
        }
    }

pop()
{
    if(isempty())
    {
        printf("\nstack is underflow\n");
    }
    else
    {
        printf("\npopped element is: %d\n",stack[top]);
        top--;
    }
}
