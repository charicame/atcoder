#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int k,x; cin >> k >> x;

    if(500*k >= x)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}