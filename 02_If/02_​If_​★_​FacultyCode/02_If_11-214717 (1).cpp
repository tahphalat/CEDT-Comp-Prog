#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main(){
    string b ; getline(cin, b);
    if(b=="") {
        cout << "Error" ;
        return 0;
    }
    int c = stoi(b);
    bool p = (b=="01" || b=="02" || (c>=20 && c<=40) || c==51 || c==53 || c==55 || c==58);
    if(p) cout << "OK";
    else cout << "Error";
}