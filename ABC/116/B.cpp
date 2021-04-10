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
    int s;cin>>s;
    map<int,int> mp;
    int cnt=0;
    mp[s]++;
    for(int i=2;i<=1000000;i++){
        if(s%2==0) s/=2;
        else s=s*3+1;
        if(mp[s]!=0){cout<<i<<endl;return 0;}
        else mp[s]++;
    }
    return 0;
}
