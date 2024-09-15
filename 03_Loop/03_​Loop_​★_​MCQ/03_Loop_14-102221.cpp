#include <iostream>
#include <string>
using namespace std;

int main(){
   string answer, respond; getline(cin, answer) ; getline(cin, respond);
   // cout << answer << endl << respond << endl;
   int count = 0;
   // cout << answer.size() << " " << respond.size() << endl;
   if(answer.size() != respond.size()) {
      cout << "Incomplete answer" ;
      return 0;
   }
   else if(answer.size() == respond.size()) {
      for(int i=0 ; i<answer.size() ;i++){
         if(answer[i] == respond[i]) count++;
      } 
   }
   cout << count ;
}