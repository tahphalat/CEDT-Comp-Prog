#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;

    double A = xm - xe;
    double B = ym - ye;
    double C = sqrt(pow(A, 2) + pow(B, 2));

    double c = re - rp;

    double a = A * c / C;
    double b = B * c / C;

    double xp = xe + a;
    double yp = ye + b;

    cout << round(xp) << " " << round(yp) << endl;
}

