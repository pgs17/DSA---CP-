#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ll n;
    cin>> n;

    ll sum=(n*(n+1))/2;

    for(int i=0;i<n-1;i++){
        int x;
        cin>> x;
        sum=sum-x;
    }

    cout<<sum<< endl;
    return 0;
}