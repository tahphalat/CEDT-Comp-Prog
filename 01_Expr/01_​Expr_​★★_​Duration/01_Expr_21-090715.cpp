#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int h[2], m[2], s[2];
    int t[2];
    for(int i=0 ; i<2 ; i++){
        cin >> h[i] >> m[i] >> s[i];
        t[i] = h[i]*60*60 + m[i]*60 + s[i];
    }

    int dh, dm, ds;
    ds = (t[1] - t[0]+(24*60*60))%(24*60*60);
    dh = ds/(60*60);
    ds -= dh*(60*60);
    dm = ds/60;
    ds -= dm*60;
    cout << dh << ":" << dm << ":" << ds;
}