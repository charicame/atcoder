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
    int a[n],c[n-1];
    int sum=0;
    rep(i,n)cin>>a[i];
    rep(i,n){
        int b;cin>>b;sum+=b;
    }
    rep(i,n-1)cin>>c[i];

    rep(i,n-1){
        if(a[i]+1==a[i+1])sum+=c[a[i]-1];
    }
    cout<<sum<<endl;
    return 0;
}
