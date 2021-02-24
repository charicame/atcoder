#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int a,b,c;cin>>a>>b>>c;
    int man=a*c;
    if(b-man>0) cout << c << endl;
    else cout << b/a << endl;
    return 0;
}