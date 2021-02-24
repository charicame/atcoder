#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;

    //証言の初期化(-1)しcin
    int t[n][n];rep(i,n)rep(j,n)t[i][j]=-1; 
    rep(i,n){
        int an;cin>>an;
        rep(j,an){
            int x,y;cin>>x>>y;x--;
            t[i][x]=y;
        }
    }

    int ans=0;
    rep(i,1<<n){
        vector<int> d(n);
        rep(j,n) if(i>>j&1)d[j]=1;

        bool ok=true;
        rep(j,n){
            if(d[j])rep(k,n){
                if(t[j][k]==-1)continue;
                if(t[j][k]!=d[k])ok=false;
            }
        }
        if(ok)ans=max(ans,__builtin_popcount(i));
    }
    cout<<ans<<endl;
    return 0;
}