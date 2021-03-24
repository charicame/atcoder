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

double slope(double xi,double yi,double xj,double yj){
    double ans=(yj-yi)/(xj-xi);
    //cout<<ans<<endl;
    return ans;
}

int main(){
    int n;cin>>n;
    vector<double> x(n),y(n);
    rep(i,n)cin>>x[i]>>y[i];

    int cnt=0;
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
        double slo=slope(x[i],y[i],x[j],y[j]);
        if(-1.0<=slo&&slo<=1.0){
            cnt++;
            //printf("%f %f %f %f %f\n",x[i],y[i],x[j],y[j],slo);
        }
    }
    cout<<cnt<<endl;
    return 0;
}