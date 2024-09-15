#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define sz(x) (int)x.size()
#define arr_sz(x) (int)sizeof(x)/sizeof(x[0])

int getValue(int lift[], int my_pos[]){

    int value=0; 
    int start = lift[1] ;
    int end = lift[2];
    int here = my_pos[0];
    int target = my_pos[1];

    // --> 1
    // <-- 0 
    bool direct1 = end > start; 
    bool direct2 = target > here;
    bool same = (direct1 == direct2);
    if(end == start) same = 0;

    // cout << "############" << endl;
    // cout << same << endl;
    // cout << start << " " << end << " " << here << " " << target << endl;
    // cout << "############" << endl;

    if(same && ( start<=here && here<end ) && (target>start && target>end)) value = abs(target - end);
    else if (same && ( end<=here && here <= start) && (target < start && target<end)) value = abs(target-end);
    else if (same && ( ( (start <= here && here <= start) && (start <= target && target <= end) ) || ((end <= here && here <= start) && (end <= target && target <= start))) ) value = 0;
    else value = abs(here - end) + abs(target - here);
    return value;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n_lift; cin >> n_lift;
    int lift[n_lift][3];
    for(int i=0 ; i<n_lift ; i++){
        for(int j=0 ; j<3 ; j++) cin >> lift[i][j];
    }
    int n_my; cin >> n_my;
    int my_pos[n_my][2];
    for(int i=0 ; i<n_my ; i++){
        for(int j=0 ; j<2 ; j++) cin >> my_pos[i][j];
    }

    //เอาไปเชคกับลิฟแต่ละตัว 

    for(int i=0 ; i<n_my ; i++){
        int best_lift;
        int minn=1e3;
        int fak[n_lift] ;
        for(int j=0 ; j<n_lift ; j++){
            fak[j]=  getValue(lift[j] , my_pos[i]);
            minn = min(fak[j],minn);
        }
        int fakna = 1e3;
        for(int j=0 ; j<n_lift ;j++){
            if(fak[j] == minn) {
                // best_lift = lift[j][0];
                best_lift = min(fakna,lift[j][0]);
                fakna = lift[j][0];
                // cout << " lift : " << lift[j][0] << endl;
                // cout << "best_lift : " << best_lift << endl;
            }
        }
        // cout << best_lift  << endl;
        // cout << "min : "<< min << endl << "-----------best : " << best_lift  << endl;
        cout << ">> "  << best_lift << endl;
        // cout << "-------------------------------------------------------------------" << endl;
    }
}
