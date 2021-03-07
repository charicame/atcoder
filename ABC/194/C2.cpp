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
    lint n;cin>>n;
    map<int,lint> mp;
    rep(i,n){
        int tmp;cin>>tmp;
        tmp+=200;
        mp[tmp]++;
    }
    lint ans=0;
    for(int i=-200;i<=200;i++){
        for(int j=-200;j<=200;j++){
            ans+=mp[i+200]*mp[j+200]*pow(i-j,2);
        }
    }
    cout<<ans/2<<endl;
    return 0;
}