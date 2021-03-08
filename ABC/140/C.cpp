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
    int n;cin>>n;
    vector<int> b(n-1);
    rep(i,n-1)cin>>b[i];

    lint ans=0;ans+=b[n-2]+b[0];
    for(int i=n-2;i>0;i--){
        ans+=min(b[i],b[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}
