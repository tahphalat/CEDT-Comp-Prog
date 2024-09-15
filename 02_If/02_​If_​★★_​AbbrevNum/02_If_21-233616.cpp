#include <bits/stdc++.h>
using namespace std;
int main(){
    double number ; cin >> number;
    if(number >= 1e9){
        if(number >= 1e10){
            cout << round(number/1e9) << "B";
            return 0;
        }
        cout << round(number/1e8)/10<<"B";
    }
    else if(number >= 1e6){
        if(number>= 1e7){
            cout << round(number/1e6)<<"M";
            return 0;
        }
        cout << round(number/1e5)/10<<"M";
    }
    else if(number >= 1e3){
        if(number>=1e4){
            cout << round(number/1e3)<<"K";
            return 0;
        }
        cout << round(number/1e2)/10<<"K";
    }
    else if (number >0) cout << number;

}
