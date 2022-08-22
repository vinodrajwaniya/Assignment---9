#include<stdio.h>
int main()
{
    int x,y,n;
    while (1)
    {
    printf("\n\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Select an option's ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            printf("Enter two number ");
            scanf("%d%d",&x,&y);
            printf("Add is %d",x+y);
            break;
        case 2:
            printf("Enter two number ");
            scanf("%d%d",&x,&y);
            printf("Sub is %d",x-y);
            break;
        case 3:
            printf("Enter two number ");
            scanf("%d%d",&x,&y);
            printf("Mult. is %d",x*y);
            break;
        case 4:
            printf("Enter two number ");
            scanf("%d%d",&x,&y);
            printf("Div. is %d",x/y);
            break;
        case 5:
            break;
        default:
            printf("Invalid Input");
            break;
    }
    if(n==5)
        break;
    }
    return 0;
}