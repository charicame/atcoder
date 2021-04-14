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

string to(lint n){
    string ans;
    char tmp;
    while(n!=0){
        tmp=n%26+96;
        if(tmp==96){
            ans+='z';
            n--;
        }else ans+=tmp;
        n/=26;
    }
    return ans;
}

int main(){
    lint n;cin>>n;
    string ans=to(n);
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}