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
    string s,t;cin>>s>>t;
    int ans=0;
    rep(i,s.size()-t.size()+1){
        string tmp=s.substr(i,t.size());
        int cnt=0;
        rep(j,t.size()){
            if(tmp[j]==t[j])cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<t.size()-ans<<endl;
    return 0;
}