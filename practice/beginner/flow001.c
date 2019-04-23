#include <stdio.h>

int main()
{
    int cases, i, num1, num2;
    scanf("%d", &cases);

    for(i = 0; i < cases; i++)
    {
        scanf("%d%d", &num1, &num2);
        printf("%d\n", (num1+num2));
    }
    return 0;
}

