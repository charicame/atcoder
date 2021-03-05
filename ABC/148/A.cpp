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
    int a,b;cin>>a>>b;
    if(a==1&&b==2)cout<<3<<endl;
    if(a==2&&b==1)cout<<3<<endl;
    if(a==1&&b==3)cout<<2<<endl;
    if(a==3&&b==1)cout<<2<<endl;
    if(a==3&&b==2)cout<<1<<endl;
    if(a==2&&b==3)cout<<1<<endl;
    return 0;
}
