#include <iostream>
#include <string>
using namespace std;

int main(){
   int h; cin >> h;
   int i,j;
   for(int i=0 ; i<h-1 ; i++){
      //left
      for(int j=h-1-i ; j>0 ; j--) cout << "." ;
      cout << "*" ;

      //right
      if(i>0){
         for(int k=0; k<2*i-1 ; k++) cout<< ".";
         cout << "*";
      }
      cout << endl;
   }
   for(int i=0 ; i<2*h-1 ; i++) cout<<"*";
}
