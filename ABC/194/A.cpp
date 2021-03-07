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
    int a,b;cin>>a>>b;
    if(a+b>=15&&b>=8){
        cout<<1<<endl;
        return 0;
    }
    else if(a+b>=10&&b>=3){
        cout<<2<<endl;
        return 0;
    }
    else if(a+b>=3){
        cout<<3<<endl;
        return 0;
    }
    else{
        cout<<4<<endl;
        return 0;
    }
    return 0;
}