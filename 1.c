#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            printf("Number of day in Jan 31");
            break;
        case 2:
            printf("Number of day in Feb 28");
            break;
        case 3:
            printf("Number of day in March 31");
            break;
        case 4:
            printf("Number of day in April 30");
            break;
        case 5:
            printf("Number of day in May 31");
            break;
        case 6:
            printf("Number of day in Jun 30");
            break;
        case 7:
            printf("Number of day in July 31");
            break;
        case 8:
            printf("Number of day in Aug 31");
            break;
        case 9:
            printf("Number of day in Sep 30");
            break;
        case 10:
            printf("Number of day in Oct 31");
            break;
        case 11:
            printf("Number of day in Nov 30");
            break;
        case 12:
            printf("Number of day in Dec 31");
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}