#include <stdio.h>
#include <conio.h>
int main()
{
    int n, k;
    printf("input two  number:");
    scanf("%d%d", &n, &k);
    if (n > k)
        printf("%d is maximum", n);
    else
        printf("%d is maximum", k);
    getch();
    return 0;
}