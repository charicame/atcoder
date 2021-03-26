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
  string s;
  cin>>s;
  int a=0,b=0,c=0,d=0,e=0,f=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A')a++;
    if(s[i]=='B')b++;
    if(s[i]=='C')c++;
    if(s[i]=='D')d++;
    if(s[i]=='E')e++;
    if(s[i]=='F')f++;
  }
  printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
  return 0;
}