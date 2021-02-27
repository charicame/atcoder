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
    lint ans=0,sum=0,mod=1000000007;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];if(sum>mod)sum%=mod;
    }
    rep(i,n){
        sum=(sum-a[i])%mod;
        if(sum<0)sum+=mod;
        ans=(ans+a[i]*sum)%mod;
    }
    cout<<ans<<endl;
    return 0;
}