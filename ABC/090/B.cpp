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
    int a,b;cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        string s=to_string(i);
        string rs=s;
        reverse(rs.begin(),rs.end());
        if(s==rs)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}