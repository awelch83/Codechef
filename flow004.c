#include <stdio.h>

int rev(int);
int fl(int);

int main()
{
    int i;
    int num;
    int tests;
    scanf("%d", &tests);

    for(i = 0; i < tests; i++)
    {
         scanf("%d", &num);
         printf("%d\n", fl(num));
    }

    return 0;
}

int fl(int num)
{
    int sum = 0;
    sum += num % 10;
    sum += rev(num) % 10;

    return sum;
}

int rev(int num)
{
    int rev = 0;

    while(num != 0)
    {
        rev *= 10;
        rev += (num % 10);
        num /= 10;
    }

    return rev;
}

