#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<tuple<string,int,int>> a;
    for(int i=1;i<=n;i++){
        string s;int p;cin>>s>>p;
        p=-p;
        a.push_back(tie(s,p,i));
    }
    sort(a.begin(),a.end());

    rep(i,n)cout<<get<2>(a[i])<<endl;
    return 0;
}
