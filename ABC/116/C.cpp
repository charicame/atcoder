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
    int n;cin>>n;
    int ans=0;
    vector<int> h(n+1);
    h[n]=0;
    rep(i,n)cin>>h[i];
    rep(i,n){
        if(h[i]<=h[i+1])continue;
        else ans+=h[i]-h[i+1]; 
    }
    cout<<ans<<endl;
    return 0;
}
