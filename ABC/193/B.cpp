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
    int mn=INF;
    rep(i,n){
        int p;double a,x;cin>>a>>p>>x;
        if(x-(a+0.5)>0) mn=min(mn,p);
    }
    if(mn==INF)mn=-1;
    cout<<mn<<endl;
    return 0;
}
