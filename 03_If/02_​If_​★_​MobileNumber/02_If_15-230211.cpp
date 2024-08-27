#include <bits/stdc++.h>
using namespace std;
int main(){
    string number ; cin >> number;
    if(number.size() == 10 && number[0] == '0' && (number[1] == '6' || number[1] == '9') || number[1] == '8' ) cout << "Mobile number";
    else cout << "Not a mobile number";
}