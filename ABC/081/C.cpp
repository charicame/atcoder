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
    lint n,k;cin>>n>>k;
    vector<lint> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    vector<lint> kazu;
    lint tmp=1;
    rep(i,n){
        if(a[i]==a[i+1])tmp++;
        else {
            kazu.push_back(tmp);
            tmp=1;
        }
    }
    sort(kazu.begin(),kazu.end());
    lint kai=max((lint)0,(lint)kazu.size()-k);
    int ans=0;
    rep(i,kai){
        ans+=kazu[i];
    }
    cout<<ans<<endl;
    return 0;
}