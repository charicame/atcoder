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
    char a,b,c,d;cin>>a>>b>>c>>d;
    vector<int> x(4);
    x[0]=a-'0';
    x[1]=b-'0';
    x[2]=c-'0';
    x[3]=d-'0';

    rep(s,1<<3){
        int tmp=x[0];
        vector<char> p(3);
        //cout<<s<<" "<<tmp<<" ";
        rep(i,3){
            if(s>>i&1){
                tmp-=x[i+1];p[i]='-';
            }
            else {
                tmp+=x[i+1];p[i]='+';
            }
            //cout<<tmp<<" ";
        }
        //cout<<endl;
        if(tmp==7){
            printf("%d%c%d%c%d%c%d=7\n",x[0],p[0],x[1],p[1],x[2],p[2],x[3]);
            return 0;
        }
    }
    return 0;
}