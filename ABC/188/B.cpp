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

int main(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];

    int ans=0;
    rep(i,n){
        ans+=a[i]*b[i];
    }
    cout<<(ans==0?"Yes":"No")<<endl;
    return 0;
}