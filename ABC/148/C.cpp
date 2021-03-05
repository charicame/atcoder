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
    lint a,b;cin>>a>>b;
    int ma=0;
    for(int i=1;i<=max(a,b);i++){
        if(a%i==0&&b%i==0)ma=max(ma,i);
    }
    cout<<a*b/ma<<endl;
    return 0;
}
