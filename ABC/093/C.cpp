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
    int a,b,c;cin>>a>>b>>c;
    int mn,cn,mx;
    mn=min({a,b,c});
    mx=max({a,b,c});
    cn=(a+b+c)-(mn+mx);

    int ans=0;
    if(mn==cn)ans=mx-cn;
    else if((mx-mn)%2==0&&(mx-cn)%2==0)ans+=(mx-mn)/2+(mx-cn)/2;
    else {
        ans+=(mx-cn);mn+=(mx-cn);
        while(mn<=mx-2){
            mn+=2;ans++;
        }
        //cout<<mn<<" "<<mx<<endl;
        if(mn!=mx)ans+=2;
    }
    cout<<ans<<endl;
    return 0;
}