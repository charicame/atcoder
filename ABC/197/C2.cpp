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
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=INF;
    rep(s,1<<(n-1)){
        int tmp=0;
        int x=0;
        rep(i,n){
            x|=a[i];
            if(s>>i&1){
                tmp^=x;x=0;
            }
        }
        tmp^=x;
        ans=min(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}
