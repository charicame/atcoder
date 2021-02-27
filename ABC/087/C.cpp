#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    int a[2][n];
    rep(i,n)cin>>a[0][i];
    rep(i,n)cin>>a[1][i];

    int mx=0;
    rep(i,n){
        int tmp=0;
        for(int j=0;j<=i;j++)tmp+=a[0][j];
        for(int j=i;j<n;j++)tmp+=a[1][j];
        mx=max(mx,tmp);
    }
    cout<<mx<<endl;
    return 0;
}