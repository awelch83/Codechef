#include <stdio.h>
#include <stdlib.h>

int _(int);
int __(int, int);

int main(int argc, char** argv)
{
    int ___, ____, _____, i;
    scanf("%d", &_____);
    
    for(i = 0; i < _____; i++)
    {
        scanf("%d%d", &____, &___);
        printf("%d\n", __(____, ___));
    }
    
    return (EXIT_SUCCESS);
}

int __(int ____, int ___)
{
    int ______ = 0;
    
    for(____; ____ <= ___; ____++)
        if(____ == _(____))
            ______ += ____;
    
    return ______;
}

int _(int _______)
{
    int ________ = 0;
    
    while (_______ != 0)
    {
       ________ = ________ * 10;
       ________ = ________ + _______%10;
       _______ = _______/10;
    }
    
    return ________;
}

