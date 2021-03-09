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
    lint n;cin>>n;
    map<string,lint> mp;
    lint sum=0;
    rep(i,n){
        string s;cin>>s;
        sort(s.begin(),s.end());
        mp[s]++;
    }
    for(auto p:mp){
        lint n=p.second;
        sum+=n*(n-1)/2;
    }
    cout<<sum<<endl;
    return 0;
}