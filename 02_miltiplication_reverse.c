#include <stdio.h>

int main()
{
    int i = 12;
    int n ;
    printf("Enter the number you want to use for this table: \n");
    scanf("%d\n", &n);

    while (i > 0)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i--;
    }
    return 0;
}