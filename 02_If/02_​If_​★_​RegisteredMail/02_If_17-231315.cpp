#include <bits/stdc++.h>
using namespace std;
int main(){

    int m; cin >> m;
    if(m <= 100) cout << 18 ;
    else if( m > 100 && m<=250) cout << 22;
    else if (m>250 && m<=500) cout << 28;
    else if(m>500 && m<= 1000)  cout << 38;
    else if(m>1000 && m<= 2000) cout << 58;
    else if (m>2000) cout << "Reject";
}