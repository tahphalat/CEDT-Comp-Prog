#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string plate; cin >> plate;
    int n; cin >> n;

    //0AA-000
    string front = plate.substr(0,1);
    string middle = plate.substr(1,2);
    string back = plate.substr(4,3);

    for(int i=0 ; i<n ; i++){
        if(back != "999"){
            if(back[2] != '9') back[2]++;
            else{
                back[2] = '0';
                if(back[1] != '9') back[1]++;
                else{
                    back[1] = '0';
                    back[0]++;
                }
            }
        }
        else{
            back = "000";
            if(middle[1]!= 'Z') middle[1]++;
            else{
                middle[1]='A';
                if(middle[0] != 'Z') middle[0]++;
                else{
                    middle[0] = 'A';
                   front = to_string(stoi(front)+1);
                }
            }
        }
    }

    cout << front << middle << "-" << back;
    return 0;

}