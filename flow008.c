#include <stdio.h>

int main()
{
    int cases, i, num;
    scanf("%d", &cases);

    for(i = 0; i < cases; i++)
    {
        scanf("%d", &num);
        if(num >= 10)
            printf("%d\n", -1);
        else
            printf("What an obedient servant you are!\n");
    }

    return 0;
}

