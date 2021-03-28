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
    int h,w,x,y;cin>>h>>w>>x>>y;
    int s[h][w]={};
    rep(i,h)rep(j,w){
        char a;cin>>a;
        if(a=='#')s[i][j]=1;
        else s[i][j]=0;
    }
    x--;y--;
    int cnt=1;
    for(int i=x+1;i<h;i++){
        if(s[i][y]==s[x][y])cnt++;
        else break;
    }
    for(int i=y+1;i<w;i++){
        if(s[x][i]==s[x][y])cnt++;
        else break;
    }
    for(int i=x-1;i>=0;i--){
        if(s[i][y]==s[x][y])cnt++;
        else break;
    }
    for(int i=y-1;i>=0;i--){
        if(s[x][i]==s[x][y])cnt++;
        else break;
    }
    cout<<cnt<<endl;
    return 0;
}