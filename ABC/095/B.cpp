#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define INF 2147483647

int main(){
    int n,x;cin>>n>>x;
    int m[n];rep(i,n)cin>>m[i];
    int sum=0,mi=INF;
    rep(i,n){
        sum+=m[i];
        mi=min(mi,m[i]);
    }
    int nokori=x-sum;
    int cnt=n;
    while(nokori>=mi){
        nokori-=mi;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
