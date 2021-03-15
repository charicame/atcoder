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

lint gcd(lint a,lint b){
    if (a%b == 0)return(b);
    return(gcd(b, a%b));
}

int main(){
    int k;cin>>k;
    lint sum=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            for(int m=1;m<=k;m++){
                sum+=gcd(i,gcd(j,m));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}