#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

lint gcd(lint a,lint b){
    if (a%b == 0)return(b);
    return(gcd(b, a%b));
}

int main(){
    lint n,x;cin>>n>>x;  
    if(n==1){
        lint w;cin>>w;
        cout<<abs(w-x)<<endl;
        return 0;
    }
    
    vector<lint> dis(n);
    rep(i,n){
        int xx;cin>>xx;
        dis[i]=abs(xx-x);
    }

    int ans=dis[0];
    for(int i=0;i<n;i++){
        ans=gcd(ans,dis[i]);
    }
    cout<<ans<<endl;
    return 0;
}