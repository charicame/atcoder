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
    int n,d;cin>>n>>d;
    int x[n][d];
    rep(i,n)rep(j,d)cin>>x[i][j];

    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double tmp=0;
            rep(k,d)tmp+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
            tmp=sqrt(tmp);
            int waru=tmp/1;
            if(tmp-waru==0.0)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}