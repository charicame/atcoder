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
    double txa,tya,txb,tyb,t,v;cin>>txa>>tya>>txb>>tyb>>t>>v;
    int n;cin>>n;
    bool ans=false;
    rep(i,n){
        int x,y;cin>>x>>y;
        double iki=sqrt((txa-x)*(txa-x)+(tya-y)*(tya-y));
        double kae=sqrt((txb-x)*(txb-x)+(tyb-y)*(tyb-y));
        if(v*t>=iki+kae)ans=true;
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}