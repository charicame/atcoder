#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n,m;cin>>n>>m;
    map<int,string> mp;
    set<int> scnt;
    map<int,int> pcnt;
    int cnt=0;
    rep(i,m){
        int p;string s;
        cin>>p>>s;
        if(mp[p]=="AC")continue;

        mp[p]=s;
        if(mp[p]=="WA"){
            pcnt[p]++;
        }else if(mp[p]=="AC"){
            scnt.insert(p);
            cnt+=pcnt[p];
            mp[p]=s;
        }
    }
    cout<<scnt.size()<<" "<<cnt<<endl;
    return 0;
}
