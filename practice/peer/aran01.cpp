#include <iostream>
#include <string>
using namespace std;

int main(){
    int y;
    string w;
    char z;

    cin >> y;

    for(int i = 0; i < y; i++){
        int j = 0;
        int x = NULL;

        cin >> w;

        while(w[j] != '\0'){
            x += w[j];
            j++;
        }

        z = x / j;
        cout << z << endl;
    }

    return 0;
}

