#include<iostream>
#include <string>
#include<cmath>
using namespace std;

long gcd(long a, long b) {    
     if (b == 0) return a;     
     return gcd(b, a%b); 
} 

int main(){
   string a,b,c; cin >> a>> b>>c; 
    long top = stoi(b+c) - stoi(b);
    long bottom = (pow(10,c.size())-1) * pow(10,b.size());
    top = (stoi(a)*bottom)+top;
    long g = gcd(top,bottom);
    cout << top/g << " / " << bottom/g;
}