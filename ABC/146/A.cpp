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
    string s;cin>>s;
    int ans=0;
    if(s=="SAT")ans=1;
    if(s=="FRI")ans=2;
    if(s=="THU")ans=3;
    if(s=="WED")ans=4;
    if(s=="TUE")ans=5;
    if(s=="MON")ans=6;
    if(s=="SUN")ans=7;
    cout<<ans<<endl;
    return 0;
}