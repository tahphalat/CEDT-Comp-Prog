#include <iostream>
using namespace std;

int main(){
    float p; cin >> p;
    float k=1, t=1;
    int count =0;
    while(!(1-t >= p)){
        if(count !=0) k++;
        t=t*(365-(k-1))/365;
        count++;
    }
    cout << k << endl;
}