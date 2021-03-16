#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

const lint mod=1000000007;

int main(){
    lint n,m;cin>>n>>m;
    vector<bool> broken(n+1);
    rep(i,m){
        int a;cin>>a;
        broken[a]=true;
    }
    vector<int> dp(n+2);
    const int mod=1000000007;
    dp[n]=1;
    for(int i=n-1;i>=0;i--){
        if(broken[i]){dp[i]=0;continue;}
        dp[i]=(dp[i+1]+dp[i+2])%mod;
    }
    cout<<dp[0]<<endl;
    return 0;
}