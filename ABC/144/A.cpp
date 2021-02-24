#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
#define PI acos(-1)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int a,b;cin >> a >> b;
    if(a<10 && b<10) cout << a*b << endl;
    else cout << -1 << endl;
    return 0;
}