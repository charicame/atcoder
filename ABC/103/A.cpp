#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int a1,a2,a3;cin>>a1>>a2>>a3;
    //int ma=max(a1,a2);ma=max(ma,a3);//maxは2つ。
    //int mi=min(a1,a2);mi=min(mi,a3);
    //cout<<ma-mi<<endl;
    cout<<max(a1,max(a2,a3))-min(a1,min(a2,a3))<<endl;
    return 0;
}