#include <iostream>
#include <string>

using namespace std;

int main(){
    int c;
    string a, b;

    cin >> c;

    for(int i = 0; i < c; i++){
        cin >> a >> b;

        if(a.find(b) != string::npos)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}

