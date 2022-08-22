#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number ");
    scanf("%d",&n);
    switch (n%2==0)
    {
        case 1:
            printf("Next Odd no. is %d",n+1);
            break;
        case 0:
            printf("Please enter even value");
            break;
    default:
        break;
    }
    return 0;
}