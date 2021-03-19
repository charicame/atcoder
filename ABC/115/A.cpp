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
    int d;cin>>d;
    if(d==25)cout<<"Christmas"<<endl;
    else if(d==24)cout<<"Christmas Eve"<<endl;
    else if(d==23)cout<<"Christmas Eve Eve"<<endl;
    else if(d==22)cout<<"Christmas Eve Eve Eve"<<endl;
    return 0;
}