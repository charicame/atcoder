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
    if(n[n.size()-1]=='2')cout<<"hon"<<endl;
    if(n[n.size()-1]=='4')cout<<"hon"<<endl;
    if(n[n.size()-1]=='5')cout<<"hon"<<endl;
    if(n[n.size()-1]=='7')cout<<"hon"<<endl;
    if(n[n.size()-1]=='9')cout<<"hon"<<endl;

    if(n[n.size()-1]=='0')cout<<"pon"<<endl;
    if(n[n.size()-1]=='1')cout<<"pon"<<endl;
    if(n[n.size()-1]=='6')cout<<"pon"<<endl;
    if(n[n.size()-1]=='8')cout<<"pon"<<endl;

    if(n[n.size()-1]=='3')cout<<"bon"<<endl;
    return 0;
}