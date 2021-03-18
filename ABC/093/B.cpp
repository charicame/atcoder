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
    lint a,b,k;cin>>a>>b>>k;
    lint i,j;
    for(i=a;i<min(a+k,b);i++){
        cout<<i<<endl;
    }
    for(j=max(b-k+1,i);j<=b;j++){
        cout<<j<<endl;
    }
    return 0;
}