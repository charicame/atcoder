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
    int a,b,w;cin>>a>>b>>w;
    w*=1000;
    int l=INF,r=-INF;
    for(int n=1;n<=w;n++){
        if(a*n<=w&&w<=b*n){
            l=min(l,n);
            r=max(r,n);
        }
    }
    if(l==INF)cout<<"UNSATISFIABLE"<<endl;
    else cout<<l<<" "<<r<<endl;

    return 0;
}