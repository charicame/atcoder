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
    int n,k;cin>>n>>k;
    int ans=0;
    rep(i,n){
        int tmp;cin>>tmp;
        if(tmp>=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}