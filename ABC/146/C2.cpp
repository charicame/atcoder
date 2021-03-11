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
    lint be=0,en=1e9+1;

    auto keta=[&](lint c){
        string s=to_string(c);
        int ke=s.size();
        return ke;
    };

    auto f=[&](lint c){
        return a*c+b*keta(c);
    };

    while((en-be)>1){
        lint c=(be+en)/2;
        if(f(c)<=x)be=c;
        else en=c;
    }
    cout<<be<<endl;
    return 0;
}