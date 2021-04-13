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
    lint n;cin>>n;
    vector<lint> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]==0){cout<<0<<endl;return 0;}
    sort(a.rbegin(),a.rend());
    if(a[n-1]>1000000000&&a[n-2]>1000000000){cout<<-1<<endl;return 0;}
    lint ans=a[0];
    for(int i=1;i<n;i++)ans*=a[i];
    cout<<(ans<=1000000000000000000?ans:-1)<<endl;
    return 0;
}
