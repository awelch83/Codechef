#include <iostream>

using namespace std;

void c(int,int,int,int);

int main(){
    int a;
    int b;
    int x, y, z;

    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> b;
        cin >> x >> y >> z;
        c(x,y,z,b);
    }

    return 0;
}

void c(int x, int y, int z, int d){
    int e = (x * 100) + (y * 10) + z;
    int f = 0;

    e = e * 10 + 10000;

    for(int i = 80000; i >= 0; i-=10000){
        for(int j = 9; j >= 0; j--){
            if((e + i + j) % d == 0){
                f = e + i + j;
                break;
            }
        }

        if(f != 0){
            cout << (f / 10000) << " " << (f % 10) << " " << (f / d) << endl;
            break;
        }
    }
    if(f == 0)
        cout << 0 << endl;
}
