#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    switch (n>0)
    {
        case 1:
            printf("Change positive no. is %d",(n*-1));
            break;
        case 0:switch (n<0)
        {
            case 1: 
                printf("Change negative no. is %d",(n*-1));
            break;
        default:
            printf("Invalid input");
            break;
        }break;
    }
    return 0;
}