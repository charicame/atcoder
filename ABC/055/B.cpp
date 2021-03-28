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
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

const lint mod=pow(10,9)+7;

int main(){
    lint n;cin>>n;
    lint ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}