#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<lint> a(n);
    rep(i,n)cin>>a[i];
    lint ans=0,sum=0,mod=1000000007;
    rep(i,n){
        ans=(ans+a[i]*sum)%mod;
        sum=(sum+a[i])%mod;
    }
    cout<<ans<<endl;
    return 0;
}