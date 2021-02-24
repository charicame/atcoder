#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
 
int main(){
    string n;cin>>n;
    int k=n.size();
    vector<int> a(3);
    rep(i,k)a[(n[i])%3]++;

    int sum=0;
    rep(i,3)sum+=a[i]*i;
    int ans=INF;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[1]<i)continue;
            if(a[2]<j)continue;
            if(i+j==k)continue;
            int nsum=sum;
            nsum-= (i*1+j*2);
            if(nsum%3==0)ans=min(ans,i+j);
        }
    }
    if(ans==INF)ans=-1;
    cout<<ans<<endl;
    return 0;
}