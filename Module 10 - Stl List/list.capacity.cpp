#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30};
    // cout<<myList.max_size()<<endl; 
    // myList.clear(); //aita dile ar kono value thakbena and size 0 hoie jabe

    myList.resize(2);
    myList.resize(5,100); //baki value 100 hoie jabe


    for(int val: myList){
        cout<<val<<" ";
    }

    return 0;
}