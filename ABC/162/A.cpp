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
    string s;cin>>s;
    if(s[0]=='7')cout<<"Yes"<<endl;
    else if(s[1]=='7')cout<<"Yes"<<endl;
    else if(s[2]=='7')cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}