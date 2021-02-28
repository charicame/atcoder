#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int x;cin>>x;
    int ans=0;
    if(x%100==0)ans=100;
    else ans=100-x%100;
    cout<<ans<<endl;
    return 0;
}