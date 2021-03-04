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
    lint x,k,d;cin>>x>>k>>d;
    x=fabs(x);
    lint ans,tmp,ktmp;
    lint xd=x/d;
    if(k<=xd){cout<<x-d*k<<endl;return 0;}
    else {tmp=x%d;ktmp=k-xd;}
    if(ktmp%2==0&&ktmp>=1){ans=tmp;}
    else if(ktmp>=1){ans=abs(tmp-d);}
    cout<<ans<<endl;
    return 0;
}
