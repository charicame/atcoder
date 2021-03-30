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
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    string s;cin>>s;
    s=s.erase(s.size()-1);
    do{
        //cout<<s.substr(0,s.size()/2)<<" "<<s.substr(s.size()/2,s.size()/2)<<endl;
        if(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()/2))break;
        else s.erase(s.size()-1);
    }while(1);
    cout<<s.size()-1<<endl;
    return 0;
}
