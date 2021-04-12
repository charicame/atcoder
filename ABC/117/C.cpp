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
    int n,m;cin>>n>>m;
    vector<int> x(m);
    rep(i,m)cin>>x[i];
    sort(x.begin(),x.end());
    vector<int> sa(m-1);
    rep(i,m-1)sa[i]=x[i+1]-x[i];
    sort(sa.begin(),sa.end());
    int ans=0;
    rep(i,m-n){
        ans+=sa[i];
        //cout<<sa[i]<<" ";
    }
    //cout<<endl;
    cout<<ans<<endl;
    return 0;
}