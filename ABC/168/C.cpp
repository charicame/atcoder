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
    long double a,b,h,m;cin>>a>>b>>h>>m;
    h=(h/12.0)+(m/60.0)/12.0;
    m=m/60.0;

    long double C=abs((h-m)*PI*2.0);
    long double ans=sqrt(a*a+b*b-2*a*b*cos(C));
    printf("%.10Lf\n",ans);
    return 0;
}