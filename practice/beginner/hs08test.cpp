#include <iostream>
using namespace std;

#define FEE .5

int main()
{
    int toWithdraw;
    double initBal;

    cin >> toWithdraw >> initBal;

    if((toWithdraw % 5 == 0) && ((toWithdraw + FEE) <= initBal))
    {
        initBal -= (toWithdraw + FEE);
        cout << initBal << endl;
    }
    else
        cout << initBal << endl;

    return 0;
}
