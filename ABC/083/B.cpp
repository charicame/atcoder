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
    int n,a,b;cin>>n>>a>>b;
    int ans=0;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        int tmp=0;
        rep(j,s.size()){
            tmp+=s[j]-'0';
        }
        if(a<=tmp&&tmp<=b)ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}