#include <iostream>
using namespace std;

int main(){
   string password; 
    
    while(getline(cin, password)){
        bool big =0 ,small =0, number=0,special=0;
        bool strong=0, weak=0;
        for(int i=0 ; i<password.size() ; i++){
            if(password[i] >= 65 && password[i] <= 90)  big = true;
            else if(password[i] >= 97 && password[i] <= 122) small = true; 
            else if(password[i] >= 48 && password[i] <= 57) number =true; 
            else special = true; 
        }
        strong = (password.size() >= 12 && big && small && number && special);
        weak = (password.size() >=8 && big && small && number );
        if(strong) cout << ">> strong" << endl;
        else if(weak) cout << ">> weak"<< endl;
        else cout << ">> invalid"<< endl;
    }
}