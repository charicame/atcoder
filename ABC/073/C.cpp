#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    lint n;cin>>n;
    map<lint,lint> mp;
    rep(i,n){
        lint a;cin>>a;
        if(mp[a]>0)mp[a]--;
        else mp[a]++;
    }
    lint ans=0;
    for(auto x:mp){
        if(x.second>0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
