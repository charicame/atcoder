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
    float n,m;cin>>n>>m;
    //int ans=0;
    //for(int i=1;i<n;i++)ans+=i;
    //for(int i=1;i<m;i++)ans+=i;
    //cout<<ans<<endl;
    cout<<n*(n-1)/2+(m-1)*m/2<<endl;
    return 0;
}