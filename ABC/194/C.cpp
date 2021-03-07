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
    vector<int> a(n);
    rep(i,n)cin>>a[i];

    lint ans=0;
    for(lint i=0;i<n-1;i++){
        for(lint j=i+1;j<n;j++){
            ans+=pow(abs(a[i]-a[j]),2);
        }
    }
    cout<<ans<<endl;
    return 0;
}