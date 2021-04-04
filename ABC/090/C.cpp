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
    lint n,m;cin>>n>>m;
    lint ans=0;
    if(n==1||m==1)ans=max((lint)1,n-2)*max((lint)1,m-2);
    else ans=(n-2)*(m-2);
    cout<<ans<<endl;
    return 0;
}