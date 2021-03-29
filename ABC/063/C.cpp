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
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<int> s(n);
    bool baisu=true;
    rep(i,n){
        cin>>s[i];
        if(s[i]%10!=0)baisu=false;
    }
    if(baisu){
        cout<<0<<endl;return 0;
    }
    sort(s.begin(),s.end());
    lint ans=0;
    rep(i,n)ans+=s[i];
    rep(i,n){
        if(ans%10!=0)break;
        else if(s[i]%10!=0){
            ans-=s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}