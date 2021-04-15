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
    int n,x;cin>>n>>x;
    vector<int> vp(n);
    rep(i,n){
        double v,p;cin>>v>>p;
        vp[i]=v*p;
    }
    int tmp=0;
    for(int i=0;i<n;i++){
        tmp+=vp[i];
        if(tmp>x*100){cout<<i+1<<endl;return 0;}
    }
    cout<<-1<<endl;
    return 0;
}