#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    const double PI = M_PI;

    for(int i = 1; i <= t; i++){
        double r, result;
        cin >> r;
        result = pow((2*r),2) - (PI * pow(r,2));
        cout << "Case " << i << ": " << fixed << setprecision(2) << result << endl;
    }
    return 0;
}