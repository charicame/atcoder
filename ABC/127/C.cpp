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
    int n,m;cin>>n>>m;
    int beg=-INF,end=INF;
    rep(i,m){
        int a,b;cin>>a>>b;
        beg=max(beg,a);
        end=min(end,b);
    }
    if(end-beg<0)cout<<0<<endl;
    else cout<<(end-beg)+1<<endl;
    return 0;
}