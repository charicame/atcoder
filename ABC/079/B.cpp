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
    lint l[n+1]={};
    l[0]=2;l[1]=1;
    for(int i=2;i<=n;i++){
        l[i]=l[i-1]+l[i-2];
    }
    cout<<l[n]<<endl;
    return 0;
}