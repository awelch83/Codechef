#include <stdio.h>

int sumdigits(int);

int main()
{
    int cases, i, num;

    scanf("%d", &cases);

    for(i = 0; i < cases; i++)
    {
        scanf("%d", &num);
        printf("%d\n", sumdigits(num));
    }

    return 0;
}

int sumdigits(int num)
{
    int sum = 0;

    while(num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    return sum;
}

