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
    int a,c,b; cin >> a >> b >> c;
    int ans=c-(a-b);
    if(ans<=0) ans =0;
    cout << ans << endl;
    return 0;
}