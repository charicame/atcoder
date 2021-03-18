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
    char s[3];
    rep(i,3)cin>>s[i];
    bool ok=false;
    if(s[0]=='a'&&s[1]=='b'&&s[2]=='c')ok=true;
    else if(s[0]=='a'&&s[1]=='c'&&s[2]=='b')ok=true;
    else if(s[0]=='b'&&s[1]=='c'&&s[2]=='a')ok=true;
    else if(s[0]=='b'&&s[1]=='a'&&s[2]=='c')ok=true;
    else if(s[0]=='c'&&s[1]=='a'&&s[2]=='b')ok=true;
    else if(s[0]=='c'&&s[1]=='b'&&s[2]=='a')ok=true;
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}