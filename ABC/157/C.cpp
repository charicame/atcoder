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

    if(m==0&&n==1){cout<<0<<endl;return 0;}
    else if(m==0){cout<<pow(10,n-1)<<endl;return 0;}

    map<int,int> mp;
    rep(i,m){
        int s,c;cin>>s>>c;
        if(mp[s]!=0&&mp[s]!=c){cout<<-1<<endl;return 0;}
        mp[s]=c;
    }

    if(mp[1]==0&&n!=1){cout<<-1<<endl;return 0;}

    for(int i=1;i<=n;i++) cout<<mp[i];
    cout<<endl;
    return 0;
}