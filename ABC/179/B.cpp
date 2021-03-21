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
    int n;cin>>n;
    int d[n]={};
    rep(i,n){
        int d1,d2;cin>>d1>>d2;
        if(d1==d2)d[i]=1;
    }
    bool ans=false;
    rep(i,n-2){
        if(d[i]==1&&d[i+1]==1&&d[i+2]==1)ans=true;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}