#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n,m;cin>>n>>m;
    int a[n],b[n],c[m],d[m];
    rep(i,n)cin>>a[i]>>b[i];
    rep(i,m)cin>>c[i]>>d[i];

    rep(i,n){
        int k=0;
        rep(j,m){
            if((abs(a[i]-c[k])+abs(b[i]-d[k]))>(abs(a[i]-c[j])+abs(b[i]-d[j]))) k=j;
        }
        cout<<k+1<<endl;
    }
    return 0;
}