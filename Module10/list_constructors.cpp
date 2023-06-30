#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> myList();  //Initializing
    // list<int> myList(10); //Initializing
    // list<int> myList(10,5); //Initializing 
    // cout<<myList.size(); 
    
    // //copying
    // 1st way 
    // list <int> list2 = {1,2,3,4,5};
    // list<int> myList(list2);


    //Another way of copying from array
    // int a[5] = {10,20,30,40,50};
    // list<int> myList(a,a+5);

    // copying from vector 
    vector <int> v = {100,200,300};
    list <int> myList(v.begin(), v.end());


    //index die access kora jaina 
    // so  
    // cout<<myList.front()<<endl;  

    //for loop for list hocce iterator, normally for loop cholate parbana


    //one way 
    //This will return pointer 
    // for(auto it = myList.begin(); it!=myList.end() ;it++){
    //     cout<<*it<<" ";
    // }

    //Preferred way 
    //another way of printing
    for(int val: myList){
        cout<<val<<endl;
    }

    return 0;
}