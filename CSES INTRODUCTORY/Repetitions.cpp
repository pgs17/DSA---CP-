#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    string str;
    cin>> str;

    int max_length=INT_MIN;
    int length=1;

    for(int i=0;i<str.length();i++){
        if(i>0 && str[i]==str[i-1]){
            length++;
        }
        else{
            length=1;
        }
        max_length=max(max_length,length);
    }

    cout<< max_length<< endl;
    return 0;
}