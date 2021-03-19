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
    int n,m;cin>>n>>m;
    vector<lint> h(n);
    rep(i,n)cin>>h[i];

    map<int,int> mp;
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        if(h[a]<h[b])mp[a]++;
        else if(h[a]==h[b]){mp[a]++;mp[b]++;}
        else mp[b]++;
    }
    int ans=0;
    rep(i,n)if(mp[i]==0)ans++;
    cout<<ans<<endl;
    return 0;
}