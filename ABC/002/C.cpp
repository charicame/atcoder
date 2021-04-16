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
    vector<double> x(3),y(3);
    rep(i,3)cin>>x[i]>>y[i];
    x[1]-=x[0];x[2]-=x[0];x[0]=0;
    y[1]-=y[0];y[2]-=y[0];y[0]=0;
    double ans=fabs((x[0]-x[2])*(y[1]-y[2])-(x[1]-x[2])*(y[0]-y[2]))/2;
    printf("%.3f\n",ans);
    return 0;
}