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
    if(a1+a2+a3>=22)cout<<"bust"<<endl;
    else cout<<"win"<<endl;
    return 0;
}