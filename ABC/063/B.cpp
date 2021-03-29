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
    string s;cin>>s;
    map<char,int> mp;
    bool ans=true;
    rep(i,s.size()){
        if(mp[s[i]]==0)mp[s[i]]++;
        else{
            ans=false;
        }
    }
    cout<<(ans?"yes":"no")<<endl;
    return 0;
}