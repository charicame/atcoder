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
    int x,n;cin>>x>>n;
    map<int,int> mp;

    rep(i,n){
        int p;cin>>p;
        mp[p]++;
    }

    int ans,tmp=INF;
    for(int i=-101;i<=101;i++){
        if(mp[i]==0){
            if(tmp>abs(x-i)){
                tmp=abs(x-i);
                ans=i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
