#include <iostream>

int a(int);

using namespace std;

int main(){
    int b, c;
    cin >> c;

    for(int i = 1; i <= c; i++){
        cin >> b;
        do{
            b++;
        }while(b != a(b));

        cout << b << endl;
    }

    return 0;
}

int a(int b){
    int d = NULL;

    while(b != 0){
        d *= 10;
        d += b % 10;
        b /= 10;
    }

    return d;
}

