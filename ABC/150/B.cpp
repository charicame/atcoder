#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n; 
    cin >> n;
    char s[n];

    rep(i,n){
        cin >> s[i];
    }

    int cnt=0;

    rep(i,n){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') cnt++;
    }
    cout << cnt << endl;
    return 0;
}
