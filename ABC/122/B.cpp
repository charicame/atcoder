#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    string s; cin >>s;

    int i=0,j,tmp=0,cnt=0;

    do{
        j=i;
        while(s[j]=='A'||s[j]=='G'||s[j]=='C'||s[j]=='T'){
            tmp++;
            j++;
        }
        cnt = max(cnt,tmp);
        i++;tmp=0;
    }while(i<=(int)s.size());

    cout << cnt <<endl;
    return 0;
}