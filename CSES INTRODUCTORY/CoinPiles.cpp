#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    int testcases;
    cin>> testcases;

    while(testcases--){
        ll a,b;
        cin>> a >> b;

        if( (a+b)%3== 0 && max(a,b)<=2*min(a,b) ){
            cout<<"YES"<< endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}