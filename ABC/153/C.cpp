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
    lint n,k;cin>>n>>k;
    vector<pair<lint,lint>> hn;
    rep(i,n){
        lint h;cin>>h;
        hn.push_back(make_pair(h,i));
    }
    sort(hn.rbegin(),hn.rend());

    lint sum=0;
    for(int i=k;i<n;i++){
        sum+=hn[i].first;
    }
    cout<<sum<<endl;
    return 0;
}
