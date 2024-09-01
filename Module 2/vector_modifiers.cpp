#include<bits/stdc++.h>
using namespace std;
//Modifiers - 1 

int main(){ 
    vector<int> x = {10,20,30};
    vector<int> v = {1,2,3};

    x.pop_back(); //last value ber kore de 
    
    // if v = x // 0(1) 
    // jodi size different hoito tahole O(N) 

    for(int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    return 0;
}