#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, z;
    int n;
    printf("press\n 1-addition\n 2-subtraction\n 3-multiplication\n 4-divide\n");
    printf("input two number:");
    scanf("%f%f", &a, &b);
    printf("enter the operator number above to perform\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:

        z = a + b;
        printf("addition of %f and %f is:%f", a, b, z);
        break;
    case 2:
        z = a - b;
        printf("subtraction of %f and %f is:%f", a, b, z);
        break;
    case 3:
        z = a * b;
        printf("multiplication of %f and %f is:%f", a, b, z);
        break;
    case 4:
        z = a / b;
        printf("division of %f and %f is:%f", a, b, z);
        break;

    default:
        break;
    }
    return 0;
}
