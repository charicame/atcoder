#include<iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    int sum=0;
    rep(i,n){
        int an;cin>>an;
        sum+=(an-1);
    }
    cout<<sum<<endl;
    return 0;
}