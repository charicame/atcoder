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
    map<int,int>mp;
    rep(i,n){
        int a;cin>>a;
        if(mp[a]==0)mp[a]++;
        else{
            cout<<"NO"<<endl;
            return 0;
        } 
    }
    cout<<"YES"<<endl;
    return 0;
}
