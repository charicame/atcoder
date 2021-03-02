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
    vector<double> v(n);rep(i,n)cin>>v[i];
    double ans=0;
    sort(v.begin(),v.end());
    rep(i,n-1){
        v[i+1]=(v[i]+v[i+1])/2;
        ans=v[i+1];
    }
    printf("%.6f\n",ans);
    return 0;
}
