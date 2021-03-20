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
    double a,b,c,d;cin>>a>>b>>c>>d;
    double ac,ad,bc,bd;
    ac=a-c;
    ad=a-d;
    bc=b-c;
    bd=b-d;
    int ans=max({ac,ad,bc,bd});
    cout<<ans<<endl;
    return 0;
}