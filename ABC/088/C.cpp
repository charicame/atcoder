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
    int c[3][3];
    rep(i,3)rep(j,3)cin>>c[i][j];
    bool ans=true;
    rep(j,2)rep(i,3){
        int sa=c[0][j+1]-c[0][j];
        if(c[i][j+1]-c[i][j]!=sa)ans=false;
    }
    rep(j,2)rep(i,3){
        int sa=c[j+1][0]-c[j][0];
        if(c[j+1][i]-c[j][i]!=sa)ans=false;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}
