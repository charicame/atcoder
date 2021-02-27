#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    map<string,int> mp;
    rep(i,n){
        string s;cin>>s;
        mp[s]++;
    }
    int mxcnt;
    for(auto p:mp)mxcnt=max(mxcnt,p.second);
    for(auto p:mp){
        if(mxcnt==p.second)cout<<p.first<<endl;
    }
    return 0;
}