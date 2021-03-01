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
    int xn[n]={};rep(i,n)cin>>xn[i];

    int mn=INF,ans=0;
    for(int i=0;i<=100;i++){
        int tmp=0;
        rep(j,n)tmp+=(xn[j]-i)*(xn[j]-i);
        mn=min(mn,tmp);
    }
    cout<<mn<<endl;
    return 0;
}