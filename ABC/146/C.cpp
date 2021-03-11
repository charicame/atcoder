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
    lint a,b,x;cin>>a>>b>>x;
    lint ans=0,end=1000000001;

    auto keta=[&](lint c){
        string tmp=to_string(c);
        return tmp.size();
    };

    auto f=[&](lint c){
        return a*c+b*keta(c);
    };

    while(end-ans>1){
        lint c=(ans+end)/2;
        if(f(c)<=x) ans=c;
        else end=c;
    }
    cout<<ans<<endl;
    return 0;
}