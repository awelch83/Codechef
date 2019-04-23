#include <iostream>

using namespace std;

int holes(char[]);

int main()
{
    char in[100];
    int tests;

    cin >> tests;

    for(int i = 1; i <= tests; i++)
    {
        cin >> in;
        cout << holes(in) << endl;
    }

    return 0;
}

int holes(char in[])
{
    int i = 0;
    int qty = 0; // Number of holes

    while(in[i] != '\0')
    {
        switch(in[i])
        {
            case 'A':
            case 'D':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
                qty++;
                break;
            case 'B':
                qty += 2;
                break;
        }

        i++;
    }

    return qty;
}

