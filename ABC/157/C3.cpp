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
    string s(n,'?');

    rep(i,m){
        int a;char b;
        cin>>a>>b;a--;
        if(s[a]=='?'||s[a]==b)s[a]=b;
        else return puts("-1"),0;
    }
    if(n>1&&s[0]=='0')return puts("-1"),0;

    rep(i,n){
        if(s[i]=='?')s[i]=(n>1&&i==0?'1':'0');

        cout<<s[i];
    }
    cout<<endl;
    return 0;
}