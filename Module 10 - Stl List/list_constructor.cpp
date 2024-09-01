#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> myList(10,5); 

    //copying list 
    list<int> list2 = {1,2,3,4,5};
    list <int> myList(list2);

    //copying from array
    int a[5]  = {10,20,30,40,50};
    list<int> myList2(a,a+5);

    //copying from vector
    vector<int> v = {100,200,30,400,500};
    list<int> myList3(v.begin(),v.end());

    //iterator die loop krte hoi
    for(auto it = myList.begin(); it!= myList.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //Shortcut for range loop use kora jabe because index nai in doubly linked list
    cout<<"For ranged loop:  ";
    for(int val: myList){
        cout<<val<<" ";
    }

    // cout<<myList.size()<<endl; 
    // cout<<myList.front(); 
    return 0;
}