#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {20,40,100,60,10,10,10};
    // myList.remove(10); //will remove all the 10


    //Sorting
    myList.sort(); //low to high 
    //
    // myList.sort(greater<int>()); //high to low 

    //aita unique value dei only  aita sorted kora lage first 
    myList.unique();

    // myList.reverse(); 

    for(int val: myList){
        cout<<val<<" ";
    }
    return 0;
}