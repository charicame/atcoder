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
    vector<int> a(n);
    int ave=0;
    rep(i,n){
        cin>>a[i];
        ave+=a[i];
    }
    ave/=n;
    int ans1=0;
    rep(i,n){
        ans1+=abs(a[i]-ave)*abs(a[i]-ave);
    }
    ave++;
    int ans2=0;
    rep(i,n){
        ans2+=abs(a[i]-ave)*abs(a[i]-ave);
    }
    cout<<min(ans1,ans2)<<endl;
    return 0;
}