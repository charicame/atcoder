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
    lint n;cin>>n;
    lint ans=0;

    if(n>=1000)ans+=n-999;
    if(n>=1000000)ans+=n-999999;
    if(n>=1000000000)ans+=n-999999999;
    if(n>=1000000000000)ans+=n-999999999999;
    if(n>=1000000000000000)ans+=n-999999999999999;

    cout<<ans<<endl;
    return 0;
}