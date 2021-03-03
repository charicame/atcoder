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
    int n,m;cin>>n>>m;
    string ans(n,'?');
    rep(i,m){
        int s;char c;cin>>s>>c;s--;
        if(ans[s]=='?'||ans[s]==c)ans[s]=c;
        else return puts("-1"),0;
    }

    if(n>1&&ans[0]=='0')return puts("-1"),0;

    rep(i,n)if(ans[i]=='?')ans[i]=(n!=1&&i==0?'1':'0');
    cout<<ans<<endl;
    return 0;
}