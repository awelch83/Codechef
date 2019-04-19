#include <iostream>

void c(int, int);
using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b){
        if(a == 0 && b == 0)
            break;
        else
            c(a,b);
    }

    return 0;
}

void c(int a, int b){
    int d = NULL;

    while(a > 0 && b > 0){
        if((a%10) + (b%10) >= 10)
            d += 1;

        a /= 10;
        b /= 10;
    }

    if(d == 0)
        cout << "No carry operation." << endl;
    else if(d == 1)
        cout << "1 carry operation." << endl;
    else if(d >= 2)
        cout << d << " carry operations." << endl;
}

