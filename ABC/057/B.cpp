#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n,m;cin>>n>>m;
    int a[n],b[n],c[m],d[m];
    rep(i,n)cin>>a[i]>>b[i];
    rep(i,m)cin>>c[i]>>d[i];

    for(int i=1;i<=n;i++){
        int ans;
        long long int min;
        for(int j=1;j<=m;j++){
            if(j==1)min=100000000000000000;
            int tmp=abs(a[i-1]-c[j-1])+abs(b[i-1]-d[j-1]);
            if(min>tmp){
                ans=j;min=tmp;
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}