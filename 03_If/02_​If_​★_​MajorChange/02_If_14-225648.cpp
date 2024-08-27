#include <bits/stdc++.h>
using namespace std;
int main(){
    string id[2], com_prog[2], cal1[2], cal2[2];
    float gpax[2];
    int i=0;
    bool first_ok[2] = {false};
    for( i=0 ; i<2 ; i++) {
        cin >> id[i] >> gpax[i] >> com_prog[i] >> cal1[i] >> cal2[i];
        // cout << id[i] << gpax[i] << com_prog[i] << cal1[i] << cal2[i]<< endl;
        if(com_prog[i] == "A") {
            first_ok[i] = true;
            if(cal1[i] > "C") first_ok[i] = false;
            if(cal2[i] > "C") first_ok[i] = false;
        }
    }
    bool same = (gpax[0] == gpax[1] && com_prog[0] == com_prog[1] && cal1[0] == cal1[1] && cal2[0] == cal2[1]);
    if(!(first_ok[0] || first_ok[1]))  cout << "None" << endl;
    else if((first_ok[0] && !first_ok[1]) && !same) cout << id[0] ;
    else if((first_ok[1] && !first_ok[0]) && !same) cout << id[1] ;
    else if(same) cout << "Both" << endl;
    else{
        if(gpax[0] > gpax[1]) cout << id[0] ;
        else if(gpax[1] > gpax[0]) cout << id[1];
        else if(cal1[0] < cal1[1]) cout << id[0];
        else if(cal1[1] < cal1[0]) cout << id[1];
        else if(cal2[0] < cal2[1]) cout << id[0];
        else if(cal2[1] < cal2[0]) cout << id[1];
    }

    
}