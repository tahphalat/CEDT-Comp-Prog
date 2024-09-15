#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, m, y; cin >> d >> m >> y;

    int total_day=0;
    y -= 543;
    for(int i=1 ; i<=m ; i++){
        switch(i){
            case  1:
                break;
            case  2:
                total_day +=31;
                break;
            case  3:
                if((y%4==0 && y%100!=0) || y%400==0) total_day +=29;
                else total_day += 28;
                break;
            case  4:
                total_day +=31;
                break;
            case  5:
                total_day +=30;
                break;
            case  6:
                total_day +=31;
                break;
            case  7:
                total_day +=30;
                break;
            case  8:
                total_day +=31;
                break;
            case  9:
                total_day +=31;
                break;
            case  10:
                total_day +=30;
                break;
            case 11:
                total_day +=31;
                break;
            case 12 :
                total_day +=30;
                break;
        }
    }
    total_day += d;
    cout << total_day << endl;
}