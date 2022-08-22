#include<stdio.h>
int main()
{
    int n;
    printf("Enter an year ");
    scanf("%d",&n);
    switch (n%100==0)
    {
        case 1: switch(n%400==0)
        {
            case 1: printf("Leap Year");  break;


            case 0: printf("Not a leap year"); break;
        }break;
        
        case 0: switch (n%4==0)
        {
            case 1: printf("Leap Year");  break;

            case 0: printf("Not a leap year"); break;
        }
    }
    return 0;
}