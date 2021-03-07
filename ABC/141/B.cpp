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
    bool ya=true;
    for(int i=0;i<=s.size();i++){
        int tmp=i+1;
        if(tmp%2==0){
            if(s[i]=='R')ya=false;
        } else {
            if(s[i]=='L')ya=false;
        }
    }
    cout<<(ya?"Yes":"No")<<endl;
    return 0;
}