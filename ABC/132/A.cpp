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
    sort(s.begin(),s.end());
    if(s[0]==s[1]&&s[2]==s[3]&&s[0]!=s[2])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}