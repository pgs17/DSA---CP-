#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    
    ll n;
    cin>>n;

    while(n!=1){
        cout<< n << " ";
        if((n ^ 1) == (n+1)){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
    }
    cout<< 1;
    return 0;
}