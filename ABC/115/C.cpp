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
    int n,k;cin>>n>>k;
    vector<int> h(n);
    rep(i,n)cin>>h[i];
    sort(h.begin(),h.end());
    int mn=INF;
    for(int i=0;i<=n-k;i++){
        int tmp=h[i+k-1]-h[i];
        mn=min(mn,tmp);
    }
    cout<<mn<<endl;
    return 0;
}