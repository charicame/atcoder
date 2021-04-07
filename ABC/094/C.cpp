#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    lint n;cin>>n;
    vector<lint> x(n),y(n);
    rep(i,n)cin>>x[i];
    y=x;
    sort(x.begin(),x.end());
    lint x1=x[n/2-1],x2=x[n/2];
    rep(i,n){
        if(y[i]<=x1)cout<<x2<<endl;
        else cout<<x1<<endl;
    }
    return 0;
}