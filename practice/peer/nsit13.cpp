#include <iostream>
#include <map>

using namespace std;

int main(){
    int a;
    map <int, int> b;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> a;
            ++b[(a % 42)];
        }
        cout << b.size() << endl;
        b.clear();
    }
    return 0;
}

