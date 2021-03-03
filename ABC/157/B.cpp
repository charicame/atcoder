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
    int a[3][3];
    rep(i,3)rep(j,3)cin>>a[i][j];
    int n;cin>>n;
    int b[n];rep(i,n)cin>>b[i];

    int ans[3][3]={};
    bool aaa=false;
    rep(i,3)rep(j,3)rep(k,n)if(a[i][j]==b[k])ans[i][j]++;
    rep(i,3){
        if(ans[i][0]==1&&ans[i][1]==1&&ans[i][2]==1)aaa=true;
        else if(ans[0][i]==1&&ans[1][i]==1&&ans[2][i]==1)aaa=true;
    }
    if(ans[0][0]==1&&ans[1][1]==1&&ans[2][2]==1)aaa=true;
    if(ans[2][0]==1&&ans[1][1]==1&&ans[0][2]==1)aaa=true;
    
    if(aaa)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}