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
    int n,m,x;cin>>n>>m>>x;
    int cnt0=0,cntn=0;
    rep(i,m){
        int a;cin>>a;
        if(x<=a&&a<=n)cntn++;
        if(0<=a&&a<=x)cnt0++;
    }
    cout<<min(cnt0,cntn)<<endl;
    return 0;
}