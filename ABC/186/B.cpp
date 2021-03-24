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
    int h,w;cin>>h>>w;
    int a[h][w];
    int mn=INF;
    rep(i,h)rep(j,w){
        cin>>a[i][j];
        mn=min(mn,a[i][j]);
    }
    int ans=0;
    rep(i,h)rep(j,w){
        ans+=a[i][j]-mn;
    }
    cout<<ans<<endl;
    return 0;
}