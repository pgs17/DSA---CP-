#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin>> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    int mx=arr[0];
    ll operations =0;
    for(int i=1;i<n;i++){
        if(arr[i]<mx){
            operations+=mx-arr[i];
        }
        mx=max(arr[i],mx);        
    }

    cout<<operations<< endl;
    return 0;
}