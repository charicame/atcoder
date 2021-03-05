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

long long gcd(long long a,long long b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    lint a,b;cin>>a>>b;
    lint ans=a*b/gcd(a,b);
    cout<<ans<<endl;
    return 0;
}
