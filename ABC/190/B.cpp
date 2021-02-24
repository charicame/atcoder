#include<iostream>
using namespace std;

int main(){
    long long int a,s,d;
    cin >> a >> s >> d;

    int ma[a][2];
    for(int i=0;i<a;i++){
        cin >> ma[i][0] >> ma[i][1];
    }

    int cnt=0;
    for (int i = 0; i < a; i++)
    {
        if(s>ma[i][0] && d<ma[i][1]) cnt++;
    }
    if(cnt!=0) cout << "Yes" << endl;
    else cout << "No" << endl;
}