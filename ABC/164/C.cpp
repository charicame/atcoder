#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<pair<string,int>> sn;
    rep(i,n){
        string s;cin>>s;
        sn.push_back(make_pair(s,i));
    }
    sort(sn.begin(),sn.end());
    int cnt=1;
    rep(i,n-1){
        if(sn[i].first != sn[i+1].first)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
