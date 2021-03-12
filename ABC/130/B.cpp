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

int main(){
    int n,x;cin>>n>>x;
    int l[n];
    rep(i,n)cin>>l[i];

    int za[n+1];
    za[0]=0;
    rep(i,n)za[i+1]=za[i]+l[i];

    int ans=0;
    rep(i,n+1){
        if(za[i]>x)break;
        else ans++;
    }

    cout<<ans<<endl;
    return 0;
}