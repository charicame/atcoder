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
  lint n,t;cin>>n>>t;
  vector<lint> a(n);
  rep(i,n)cin>>a[i];
  lint ans=t;
  //cout<<ans<<endl;
  for(int i=n-1;i>0;i--){
    //cout<<ans<<a[i]<<endl;
    ans+=min(t,a[i]-a[i-1]);
  }
  cout<<ans<<endl;
  return 0;
}