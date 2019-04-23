#include <stdio.h>

int reverse(int);

int main()
{
    int i;
    int num;
    int testcases;

    scanf("%d", &testcases);

    for(i=0; i < testcases; i++)
    {
        scanf("%d", &num);
        printf("%d\n", reverse(num));
    }

    return 0;
}

int reverse(int num)
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

