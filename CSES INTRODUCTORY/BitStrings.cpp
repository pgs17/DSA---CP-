#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
int MOD=1e9+7;
using namespace std;

int main() {
    ll n;
    cin>> n;
    int result=1;
    for(int i=0;i<n;i++){
        result=(result*2)%MOD;
    }

    cout<< result << endl;
    return 0;
}