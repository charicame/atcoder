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
    int n;cin>>n;
    vector<lint> a(n),b(n);
    rep(i,n)cin>>a[i]>>b[i];
    lint ans=INF;
    rep(i,n)rep(j,n){
        lint tmp;
        if(i==j)tmp=a[i]+b[j];
        else tmp=max(a[i],b[j]);
        ans=min(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}