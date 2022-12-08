// #include <iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i = 1; i <= t; i++){
//         unsigned long long int sumD = 0;
//         int s;
//         cin >> s;
//         while(s--){
//             int d;
//             cin >> d;
//             sumD += d; 
//         }
//         cout << "Case " << i << ": " << sumD << endl;
//     }
//     return 0;
// }




#include <iostream>

using namespace std;

int main() {
    int T,t,x,n,i;
    unsigned long long int s;
    cin>>T;
    t=1;
    while(t<=T) {
        s=0;
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>x;
            if(x>=0)s+=x;
        }
        cout<<"Case "<<t<<": "<<s<<endl;
        t++;
    }
    return 0;
}