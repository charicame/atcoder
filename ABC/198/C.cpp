#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    long double r,x,y;cin>>r>>x>>y;
    long double u=sqrt(x*x+y*y);
    long double tmp=r;
    if(tmp==u){cout<<1<<endl;return 0;}
    for(int i=1;i<=1000000;i++){
        if(u<=tmp){cout<<(i==1?2:i)<<endl;return 0;}
        else tmp+=r;
    }
    return 0;
}