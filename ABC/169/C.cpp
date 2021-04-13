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
    long double a;cin>>a;
    char c[4];rep(i,4)cin>>c[i];
    lint ans=a*((c[0]-'0')*100+(c[2]-'0')*10+(c[3]-'0'));
    cout<<ans/100<<endl;
    return 0;
}