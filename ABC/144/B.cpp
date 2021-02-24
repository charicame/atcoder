#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
#define PI acos(-1)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n; cin >> n;
    int cnt=0;
    rep(i,10){
        rep(j,10){
            if(n == i*j) cnt++;
        }
    }
    if(cnt>0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}