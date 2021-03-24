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
    int n;cin>>n;
    int ans=n;
    for(int i=n;i>=0;i--){
        stringstream A,B;
        A<<dec<<i;
        B<<oct<<i;
        string a=A.str(),b=B.str();
        rep(j,max(a.size(),b.size()))if(a[j]=='7'||b[j]=='7'){
            ans--;break;
        }
    }
    cout<<ans<<endl;
    return 0;
}