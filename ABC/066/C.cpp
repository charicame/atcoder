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
    int n;cin>>n;
    vector<int>a(n);
    list<int> b;
    rep(i,n)cin>>a[i];
    if(n%2==0){
        rep(i,n){
            if(i%2==0)b.push_back(a[i]);
            else b.push_front(a[i]);
        }
    }else{
        rep(i,n){
            if(i%2==0)b.push_front(a[i]);
            else b.push_back(a[i]);
        }
    }
    for_each(b.cbegin(),b.cend(),[](int x){
        cout<<x<<" ";
    });
    cout<<endl;
    return 0;
}
