#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main(){
    string p ; cin >> p;
    int n[12];
    string fak;
    for(int i=0 ; i<12 ; i++) {
        fak = p[i];
        n[i] = stoi(fak);
    }
    int m  = (11 - (13*n[0]+12*n[1]+11*n[2]+10*n[3]+9*n[4]+8*n[5]+7*n[6]+6*n[7]+5*n[8]+4*n[9]+3*n[10]+2*n[11]) % 11) % 10 ;
    p.insert(1,"-");
    p.insert(6,"-");
    p.insert(12,"-");
    cout << p << "-" << m << endl;
}