#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int a,b,c,x;cin>>a>>b>>c>>x;
    int cnt=0;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                if(x==500*i+100*j+50*k)cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}