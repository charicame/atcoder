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
    int n;cin>>n;
    vector<pair<int,int>> p;
    rep(i,n){
        int tmp;cin>>tmp;
        p.push_back(make_pair(tmp,i+1));
    }
    sort(p.begin(),p.end());
    rep(i,n)cout<<p[i].second<<" ";
    cout<<endl;
    return 0;
}