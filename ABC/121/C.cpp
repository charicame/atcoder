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
    lint n,m;cin>>n>>m;
    vector<pair<lint,lint>> p;
    rep(i,n){
        int a,b;cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    sort(p.begin(),p.end());

    lint ans=0;
    lint i=0;
    while(m>0){
        lint tmp=min(m,p[i].second);
        m-=tmp;
        ans+=p[i].first*tmp;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}