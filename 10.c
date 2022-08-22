#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,k;
    float root1, root2, imaginary;
    printf("Enter a's multiple b's multiple c's multiple ");
    scanf("%f %f %f",&a,&b,&c);
    k = ( b * b ) - ( 4 * a * c );
    switch ( k > 0 )
    {
        case 1:
            root1 = (-b + sqrt( k )) / (2 * a);
            root2 = (-b - sqrt( k )) / (2 * a);
            printf("Two distinct and real roots exists: %.2f and %.2f",root1, root2);
            break;

        case 0:
            switch( k < 0 )
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt( -k ) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            root1, k, root2, imaginary);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                    break;
            }
    }
    return 0;
}