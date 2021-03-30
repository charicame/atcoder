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

int main(){
    int n;cin>>n;
    int cnt0=0,cnt1=0,cnt2=0;
    rep(i,n){
        lint a;cin>>a;
        if(a%4==0)cnt2++;
        else if(a%2==0)cnt1++;
        else cnt0++;
    }
    bool ans=false;
    if(cnt1==0){
        if(cnt0<=cnt2+1)ans=true;
    }else{
        if(cnt0<=cnt2)ans=true;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}