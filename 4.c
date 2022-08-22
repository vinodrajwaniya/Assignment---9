#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while (1)
    {    
        printf("\n\nEnter your Choice \n");
        printf("1. To check isosceles triangle\n");
        printf("2. Right angled triangle\n");
        printf("3. Equilateral triangle\n");
        printf("4. Exit\n");
        scanf("%d",&choice);

        printf("Enter length of 3 sides of triangle\n");
        scanf("%d%d%d",&a,&b,&c);

        switch (choice)
        {
        case 1 :
            if(a==b || b==c || c==a)
                printf("isosceles");
                else 
                    printf("Not isosceles");
            break;
        case 2 :
            if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
                printf("Right Triangle");
                else 
                    printf("Not a Right Triangle");
            break;
        case 3 :
            if((a==b) && (b==c))
                printf("Equilateral triangle");
                else 
                    printf("Not a Equilateral triangle");
            break;
        case 4:
            break;;
        
        default:
            printf("Invalid");
            break;
        }
    }
    return 0;
}