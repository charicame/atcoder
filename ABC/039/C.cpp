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
  string s;cin>>s;
  int cnt=0;
  rep(i,15){
    if(s[i]=='W'&&s[i+1]=='B'&&s[i]==s[i+2]&&s[i+1]==s[i+3]&&s[i]==s[i+4]&&s[i+1]==s[i+5]){cnt=0;continue;}
    cnt++;
  }
  if(cnt==9||cnt==10)cout<<"Do"<<endl;
  else if(cnt==11||cnt==12)cout<<"Re"<<endl;
  else if(cnt==1)cout<<"Mi"<<endl;
  else if(cnt==2||cnt==3)cout<<"Fa"<<endl;
  else if(cnt==4||cnt==5)cout<<"So"<<endl;
  else if(cnt==6||cnt==7)cout<<"La"<<endl;
  else if(cnt==8)cout<<"Si"<<endl;
  return 0;
}