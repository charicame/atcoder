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
    int n;cin>>n;
    lint h[n];rep(i,n)cin>>h[i];
    int tmp=0,ans=0;
    for(int i=0;i<n-1;i++){
        if(h[i]>=h[i+1])tmp++;
        else{
            ans=max(ans,tmp);
            tmp=0;
        }
    }
    ans=max(ans,tmp);
    cout<<ans<<endl;
    return 0;
}