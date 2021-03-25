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
    int n2=1<<n;
    vector<lint> a(n2);
    map<lint,int> mp;
    rep(i,n2){
        cin>>a[i];
        mp[a[i]]=i+1;
    }

    while(a.size()>2){
        vector<lint> tmp;
        for(int i=0;i<a.size();i+=2){
            tmp.push_back(max(a[i],a[i+1]));
        }
        swap(a,tmp);
    }
    cout<<mp[min(a[0],a[1])]<<endl;
    return 0;
}