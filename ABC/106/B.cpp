#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt=0;
    for(int i=0;i<=n;i++){
        if(i%2==0)continue;
        int j=i;int tmp=0;
        while(j>0){
            if(i%j==0){tmp++;}
            j--;
        }
        if(tmp>=8)cnt++;
    }
    cout << cnt << endl;
    return 0;
}