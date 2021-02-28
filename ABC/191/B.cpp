#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int an[n]={};

    for(int i=0;i<n;i++){
        cin >> an[i];
    }

    for(int i=0;i<n;i++){
        if(an[i]!=x) cout << an[i] << " ";
    }
}