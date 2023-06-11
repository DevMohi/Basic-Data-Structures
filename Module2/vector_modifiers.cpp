#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> x = {10,20,30,40};
    vector <int> v = {1,2,3};

    x.pop_back();
    for(int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    // v=x; //jodi equal steps hoi 0(1) ar nahole O(n)
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    return 0;
}