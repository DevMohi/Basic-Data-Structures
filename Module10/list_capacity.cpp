#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30};
    // myList.clear(); //aita korle clear kore dei
    // cout<<myList.max_size(); 
    myList.resize(2);
    // myList.resize(5); 
    myList.resize(5,100);
    for(int val: myList){
        cout<<val<<" ";
    }

    //isEmpty check kore empty naki

    return 0;
}