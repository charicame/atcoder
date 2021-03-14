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
    lint x;cin>>x;
    lint ans=0;
    int cnt500=0,cnt5=0;
    cnt500=x/500;
    cnt5=(x%500)/5;
    cout<<cnt500*1000+cnt5*5<<endl;
    return 0;
}