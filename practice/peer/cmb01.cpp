/* Author:          Aaron Welch
 * Codechef - PEER
 * Problem Code -   CMBO1
 * Created:         June 29th, 2010
 * Last Modified:   June 29th, 2010
 */

#include <iostream>
using namespace std;

int x9sy(int);

int main()
{
    int t;int a9z;int 
        zzq;int p;int
                qx;int r6;
                cin >> r6;
    for(int i
            =
            1
            ;
            i
            <=
            r6
            ;
            i++         )
    {
        cin >> t;cin >> a9z;zzq = x9sy(t);
        p = x9sy(a9z);
        qx = x9sy(zzq + p);
        cout <<
                    qx <<
                endl
                ;
    }

    return (0);
}

int
x9sy
(int
ssxp)
{
    int 
    xwc
    = 0;
    int qtrb;qtrb = ssxp;while(qtrb>0){
        xwc *= 10;xwc += qtrb % 10;
        qtrb /= 10;}return xwc;}

