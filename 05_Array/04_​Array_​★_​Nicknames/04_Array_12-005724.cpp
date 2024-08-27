#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin >> n;
    string fullname[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah", "Tom" };
    string nickname[]= {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie", "Not found"};

    string name_input;
    bool fn=false,nn=false;
    for(int i=0 ; i<n ; i++){
       cin >> name_input;
        for(int j=0 ; j<sizeof(fullname)/sizeof(string); j++){
            if(name_input == fullname[j]) {
                cout << nickname[j] <<endl;
                fn = true;
                break;
            }
        }
        for(int j=0 ; j<sizeof(nickname)/sizeof(string);j++){
            if(name_input == nickname[j]) {
                cout << fullname[j] <<endl;
                nn = true;
                break;
            }
       }
       if(!(fn||nn)) cout << "Not found" <<endl;
    }
}
