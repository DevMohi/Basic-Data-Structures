#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {4,2,3};
    // vector <int>:: iterator it; 
    for(auto it = v.begin(); it<v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}