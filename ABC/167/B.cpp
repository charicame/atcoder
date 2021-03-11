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
    lint a,b,c,k;cin>>a>>b>>c>>k;
    lint ans=0;
    a=min(a,k);
    c=max((lint)0,k-a-b);

    cout<<a*1+c*-1<<endl;
    return 0;
}
