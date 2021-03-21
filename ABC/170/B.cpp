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
    int x,y;cin>>x>>y;
    bool ans=false;
    for(int i=0;i<=x;i++){
        int j=x-i;
        if(i*2+j*4==y)ans=true;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}
