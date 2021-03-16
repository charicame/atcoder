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
    int n,m,c;cin>>n>>m>>c;
    int b[m];rep(i,m)cin>>b[i];
    int a[n][m];rep(i,n)rep(j,m)cin>>a[i][j];

    int ans=0;
    rep(i,n){
        int tmp=c;
        rep(j,m){
            tmp+=a[i][j]*b[j];
        }
        if(tmp>0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}