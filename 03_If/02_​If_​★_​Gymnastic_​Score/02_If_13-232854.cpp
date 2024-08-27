#include <bits/stdc++.h>
using namespace std;

int main(){
    float x[4]; 
    float max= 0, min = 100;
    float sum=0;
    for(int i=0 ; i<4 ; i++){
        cin >> x[i];
        sum += x[i];
        if(x[i] >= max) max = x[i];
        if(x[i] <= min) min= x[i];
    }
    sum = (sum-(min + max))/2;
    cout << round(sum*100.0)/100.0 ;
    
}