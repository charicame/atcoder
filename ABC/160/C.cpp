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
    int n,k;cin>>k>>n;
    vector<int> a(2*n);
    rep(i,n){
        cin>>a[i];
        a[i+n]=a[i]+k;
    }
    int ans=INF;
    for(int i=0;i<n;i++){
        int tmp;
        tmp=a[i+n-1]-a[i];
        ans=min(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}