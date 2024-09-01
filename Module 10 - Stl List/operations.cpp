#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {2,1,3,5,5};

    //remove 5
    // myList.remove(5); // removes all the 5 in the list  


    // Sort 
    // myList.sort(); //chuto theke boro 
    myList.sort(greater<int>());  // boro theke chuto  

    //Unique - duplicate values remove kore de , but values sorted kore nite hoi 
    myList.unique();

    //Reverse 
    myList.reverse(); //reverse kore de 

    for(int val : myList){
        cout<<val<< " ";
    }


    return 0;
}