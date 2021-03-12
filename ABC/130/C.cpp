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
    long double w,h,x,y;cin>>w>>h>>x>>y;
    long double ans;
    int cnt=0;
    ans=w*h/2;
    if(w/2==x&&h/2==y)cnt++;
    printf("%.10Lf %d\n",ans,cnt);
    return 0;
}