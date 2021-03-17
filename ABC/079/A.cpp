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
    string n;cin>>n;
    bool ans=false;
    if((n[0]==n[1]&&n[1]==n[2])||(n[1]==n[2]&&n[2]==n[3]))ans=true;
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}