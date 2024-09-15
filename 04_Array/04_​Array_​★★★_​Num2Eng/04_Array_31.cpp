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
    
    ll number; cin >> number;

    string s_number = to_string(number);
    ll n_number = sz(s_number);
    ll i_number[n_number];
    if(number>0){
        for(int i=0 ; i<n_number ; i++){
            // cout << "s_number"<< s_number[i] << endl;
            i_number[i] = (int)s_number[i]-'0';
            // cout << "i_number"<< i_number[i] << endl;
            if(i_number[i] != 0) {
                //ทำกรณีมากกว่าหลักสิบ 
                if(n_number - i >2 || i== n_number-1){
                    switch(i_number[i]) {
                        case 1:
                            cout << "one" << " ";
                            break;
                        case 2:
                            cout << "two" << " ";
                            break;
                        case 3:
                            cout << "three" << " ";
                            break;
                        case 4:
                            cout << "four" << " ";
                            break;
                        case 5:
                            cout << "five" << " ";
                            break;
                        case 6:
                            cout << "six" << " ";
                            break;
                        case 7:
                            cout << "seven" << " ";
                            break;
                        case 8:
                            cout << "eight" << " ";
                            break;
                        case 9:
                            cout << "nine" << " ";
                            break;
                        
                        default:
                            break;

                    }
                    ll pos = n_number - i -1;
                    if(pos==12) cout << "trillion" << " ";
                    else if(pos==9) cout << "billion" << " ";
                    else if(pos==6)cout << "million" << " ";
                    else if(pos==3) cout << "thousand" << " ";
                    else if(pos==2) cout << "hundred" << " ";
                }
                //ทำหลักสิบ
                i_number[i+1] = (int)s_number[n_number-1]-'0';
                if(n_number - i == 2 ){
                    //หลักสิบเป็นเลข1
                    if(i_number[i] ==1 && i+1==n_number-1){
                        switch(i_number[i+1]){
                            case 0:
                                cout << "ten" << " ";
                                break;
                            case 1:
                                cout << "eleven" << " ";
                                break;
                            case 2:
                                cout << "twelve" << " ";
                                break;
                            case 3:
                                cout << "thirteen" << " ";
                                break;
                            case 4:
                                cout << "fourteen" << " ";
                                break;
                            case 5:
                                cout << "fifteen" << " ";
                                break;
                            case 6:
                                cout << "sixteen" << " ";
                                break;
                            case 7:
                                cout << "seventeen" << " ";
                                break;
                            case 8:
                                cout << "eighteen" << " ";
                                break;
                            case 9:
                                cout << "nineteen" << " ";
                                break;
                        }
                    }
                    //หลักสิบไม่ใช่ 1
                    else {

                        switch(i_number[i]){
                            case 2:
                                cout << "twenty" << " ";
                                break;
                            case 3:
                                cout << "thirty" << " ";
                                break;
                            case 4:
                                cout << "forty" << " ";
                                break;
                            case 5:
                                cout << "fifty" << " ";
                                break;
                            case 6:
                                cout << "sixty" << " ";
                                break;
                            case 7:
                                cout << "seventy" << " ";
                                break;
                            case 8:
                                cout << "eighty" << " ";
                                break;
                            case 9:
                                cout << "ninety" << " ";
                                break;
                        }
                    }
                }
            }
        }
    } else cout << "zero" <<endl;

}