#include <iostream>
#include <cstdio>
using namespace std;

// int factorial(int num){
//     int ans = 1, k = 0;
//     char c;
//     while(true){
//         c = getc(stdin);
//         if(c=='\n') break;
//         if(c=='!') ++k;
//     }
//     while (num > 0){
//         ans = ans * num;
//         num = num - k;
//     }
//     return ans;
// }
// int main(){
//     int num;
//     cin >> num;

//     cout << factorial(num) << endl;
//     return 0;
// }


int main(){
    int n,k = 0;
    scanf("%d",&n);
    
    char c;
    
    while(true){
        c = getc(stdin);
        if(c=='\n') break;
        if(c=='!') ++k;
    }
    
    int ans = 1;
    
    while(n>0){
        ans *= n;
        n -= k;
    }
    
    printf("%d\n",ans);
    
    return 0;
}