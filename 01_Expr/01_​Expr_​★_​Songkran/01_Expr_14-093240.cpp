#include<iostream>
#include <cmath>
using namespace std;

int main(){
   int y; cin>>y;
   y -= 2543;
    int x = (y+floor(y/4)+11);
    cout << x%7;
}
