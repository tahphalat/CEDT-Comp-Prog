#include <iostream>
using namespace std;

int main(){
   int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
    int fak;
    if(a>b) {
        fak = a;
        a = b ;
        b = fak;
    }
    if(c>d){
        fak = c;
        c = d;
        d = fak;
    }
    if(a>c){
        fak = b;
        b =d;
        d = fak;
        c = a;
    }
    a = e;
    if(a>b){
        fak = a;
        a =b;
        b =fak;
    }
    if(c>a){
        fak = b;
        b =d;
        d = fak;
        a=c;
    }
    if(a>d)cout << d;
    else cout << a;
}