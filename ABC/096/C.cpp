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
    int h,w;cin>>h>>w;

    char s[h][w];
    rep(i,h)rep(j,w){
        cin>>s[i][j];
    }

    rep(i,h)rep(j,w){
        if(s[i][j]=='#'){
            if(s[i-1][j]=='#'||s[i+1][j]=='#'||s[i][j-1]=='#'||s[i][j+1]=='#')continue;
            else{
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}