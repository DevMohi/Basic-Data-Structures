#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    //Reduces time complexity
    sort(ar,ar+n);

    bool flag = true;
    for (int i = 0; i < n-1; i++) {
        if(ar[i] == ar[i+1]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}