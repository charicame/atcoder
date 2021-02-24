#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
#define INF 2147483647
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int a,b,c,x,y;cin>>a>>b>>c>>x>>y;
    int ms=INF;
    for(int i=0;i<=100000;i++){
        ms=min(ms,a*max(x-i,0)+b*max(y-i,0)+2*c*i);
    }
    cout<<ms<<endl; 
    return 0;
}
