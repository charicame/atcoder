#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    long long int n;cin>>n;
    string a,b;
    long long int min=10000000000;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            a=to_string(i);b=to_string(n/i);
            min=(min,max(a.size(),b.size()));
        }
    }
    cout<<min<<endl;
    return 0;
}