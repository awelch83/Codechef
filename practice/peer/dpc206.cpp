#include <iostream>

using namespace std;

int rev(int);

int main()
{
    int number;
    int reversed;
    int tests;

    cin >> tests; // Number of test cases to follow

    for(int i = 1; i <= tests; i++)
    {
        int counter = 0;

        cin >> number;

        while(number != rev(number))
        {
            reversed = rev(number);
            number += reversed;
            counter++;
        }

        cout << counter << " " << number << endl;
    }

    return 0;
}

// Return the reverse of an int
int rev(int num)
{
    int result = NULL;

    while(num > 0)
    {
        result *= 10;
        result += num % 10;
        num /= 10;
    }

    return result;
}

