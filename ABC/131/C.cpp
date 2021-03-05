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

lint gcd(lint a,lint b){
   if (a%b == 0)return(b);
   return(gcd(b, a%b));
}

lint lcm(lint a,lint b){
   return a * b / gcd(a, b);
}

int main(){
    lint a,b,c,d;cin>>a>>b>>c>>d;

    lint ans=(b/c+b/d)-((a-1)/c+(a-1)/d);
    lint lc=lcm(c,d);
    lint ltmp=b/lc-(a-1)/lc;

    ans-=ltmp;
    cout<<b-a+1-ans<<endl;
    return 0;
}