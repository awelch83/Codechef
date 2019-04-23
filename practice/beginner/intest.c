#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int count = 0, n, k, t, i = 0;
    scanf("%d%d", &n, &k);
    
    for(i; i < n; i++)
    {
        scanf("%d", &t);
        if(t % k == 0)
            count++;
    }
    
    printf("%d\n", count);

    return (EXIT_SUCCESS);
}

