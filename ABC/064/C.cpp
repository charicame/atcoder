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
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    map<int,int> mp;
    rep(i,n){
        if(1<=a[i]&&a[i]<400)mp[0]++;
        else if(400<=a[i]&&a[i]<800)mp[1]++;
        else if(800<=a[i]&&a[i]<1200)mp[2]++;
        else if(1200<=a[i]&&a[i]<1600)mp[3]++;
        else if(1600<=a[i]&&a[i]<2000)mp[4]++;
        else if(2000<=a[i]&&a[i]<2400)mp[5]++;
        else if(2400<=a[i]&&a[i]<2800)mp[6]++;
        else if(2800<=a[i]&&a[i]<3200)mp[7]++;
        else if(3200<=a[i])mp[8]++;
    }
    int cnt=0;
    rep(i,8){
        if(mp[i]!=0)cnt++;
    }
    cout<<max(1,cnt)<<" "<<cnt+mp[8]<<endl;
    return 0;
}