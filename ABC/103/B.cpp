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
    string s,t;cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s==t){cout<<"Yes"<<endl;return 0;}
        else{
            //s.insert(0,s,s.size()-1,1);
            //s.erase(s.size()-1,1);
            s=s.substr(1)+s[0];
        }
    }
    cout<<"No"<<endl;
    return 0;
}