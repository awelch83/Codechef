#include <stdio.h>

int factorial(int);

int main()
{
    int cases, i, num;
    scanf("%d", &cases);

    for(i = 0; i < cases; i++)
    {
        scanf("%d", &num);
        printf("%d\n", factorial(num));
    }

    return 0;
}

int factorial(int num)
{
    int factorial = 1;

    while(num > 1)
    {
        factorial *= num;
        num -= 1;
    }

    return factorial;
}

