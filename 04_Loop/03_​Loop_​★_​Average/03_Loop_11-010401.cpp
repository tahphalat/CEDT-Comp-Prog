#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n,count=0, sum=0;
    cin >> n;
    while(n!=-1){
        if(count !=0) cin >> n;
        if(n!=-1)sum += n; 
        count++;
    }
    if(count == 0) cout << "No Data";
    else if(count !=0) cout << round((sum/(count-1))*100)/100;
}