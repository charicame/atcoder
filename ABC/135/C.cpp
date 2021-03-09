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
    vector<lint> a(n+1),b(n);
    rep(i,n+1)cin>>a[i];
    rep(i,n)cin>>b[i];

    lint ans=0;
    rep(i,n){
        lint tmp=a[i]+a[i+1];
        if(tmp>=b[i]){
            ans+=b[i];
            a[i+1]=max((a[i+1]-max(b[i]-a[i],(lint)0)),(lint)0);
        }
        else{
            ans+=tmp;
            a[i+1]=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}