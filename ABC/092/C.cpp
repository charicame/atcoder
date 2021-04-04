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
    int n;cin>>n;
    vector<int> a(n+2);
    lint sum=0;
    a[0]=0;a[n+1]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=fabs(a[i-1]-a[i]);
    }
    sum+=fabs(a[n+1]-a[n]);
    //cout<<sum<<endl;

    for(int i=1;i<=n;i++){
        int x,y,z;
        x=fabs(a[i]-a[i-1]);
        y=fabs(a[i+1]-a[i]);
        z=fabs(a[i+1]-a[i-1]);
        //cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<sum+z-(x+y)<<endl;
    }
    return 0;
}
