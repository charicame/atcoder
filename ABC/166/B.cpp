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
    set<int> S;
    rep(i,k){
        int d;cin>>d;
        rep(j,d){
            int a;cin>>a;
            S.insert(a);
        }
    }
    cout<<n-S.size()<<endl;
    return 0;
}