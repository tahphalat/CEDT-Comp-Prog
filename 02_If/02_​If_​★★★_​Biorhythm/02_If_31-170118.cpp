#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Input
    int d[2], m[2], y[2];
    for(int i=0 ; i<2 ; i++){
        cin >> d[i] >> m[i] >> y[i];
    }
    //Black  
    int black_day= 365*(y[1]-y[0]-1);
    //Blue
    int blue_day =0;
    int red_day = 0;
    for(int i=1 ; i<m[1] ; i++){
        switch(i){
            case 1:
                blue_day += 31;
                break;
            case 2:
                if((y[1]-543)%4==0)blue_day += 29 ;
                else blue_day += 28;
                break;
            case 3:
                blue_day += 31;
                break;
            case 4:
                blue_day += 30;
                break;
            case 5:
                blue_day += 31;
                break;
            case 6:
                blue_day += 30;
                break;
            case 7:
                blue_day += 31;
                break;
            case 8:
                blue_day += 31;
                break;
            case 9:
                blue_day += 30;
                break;
            case 10:
                blue_day += 31;
                break;
            case 11:
                blue_day += 30;
                break;
            case 12:
                blue_day += 31;
                break;
        }
    }
    blue_day += d[1] -1;
    //Red
    for(int i=12 ; i>=m[0] ;i--){
        switch(i){
            case 1:
                red_day += 31;
                break;
            case 2:
                if((y[0]-543)%4==0)red_day += 29 ;
                else red_day += 28;
                break;
            case 3:
                red_day += 31;
                break;
            case 4:
                red_day += 30;
                break;
            case 5:
                red_day += 31;
                break;
            case 6:
                red_day += 30;
                break;
            case 7:
                red_day += 31;
                break;
            case 8:
                red_day += 31;
                break;
            case 9:
                red_day += 30;
                break;
            case 10:
                red_day += 31;
                break;
            case 11:
                red_day += 30;
                break;
            case 12:
                red_day += 31;
                break;
        }
    }
    red_day += 1-d[0];
    int total_day = red_day + black_day + blue_day;
    float phy = sin(2*M_PI*total_day/23);
    float emo = sin(2*M_PI*total_day/28);
    float intel = sin(2*M_PI*total_day/33);
    cout << total_day << " " << round(phy*100)/100 << " " << round(emo*100)/100 << " " << round(intel*100)/100;
}