#include <iostream>
#include <string>
using namespace std;

int main(){
   string sen; getline(cin,sen);
   string check;
   for(int i=0 ; i<sen.size() ;i++){
      check = sen.substr(i,1);
      if(check == "(") sen.replace(i,1,"[");
      else if(check == ")") sen.replace(i,1,"]");
      else if(check == "[") sen.replace(i,1,"(");
      else if(check == "]") sen.replace(i,1,")");
   }
   for(int i=0 ; i<sen.size() ;i++) cout << sen[i];
}