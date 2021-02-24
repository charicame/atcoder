#include<iostream>
#include<string>
#include<cmath>   
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    char b; cin >> b;

    if(b=='A') cout << 'T' << endl;
    else if(b=='T') cout << 'A' << endl;
    else if(b=='G') cout << 'C' << endl;
    else if(b=='C') cout << 'G' << endl;
    return 0;
}