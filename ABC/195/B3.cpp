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
    int ma=0,mi=INF;
    w*=1000;
    for(int i=1;i<=1000000;i++){
        if(a*i<=w&&w<=b*i){
            ma=max(ma,i);
            mi=min(mi,i);
        }
    }
    if(ma==0)cout<<"UNSATISFIABLE"<<endl;
    else cout<<mi<<" "<<ma<<endl;
    return 0;
}