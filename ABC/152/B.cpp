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
    int a,b;cin>>a>>b;
    string ansa;
    rep(i,b){
        ansa+=to_string(a);
    }
    string ansb;
    rep(i,a){
        ansb+=to_string(b);
    }
    cout<<(ansa<=ansb?ansa:ansb)<<endl;
    return 0;
}
