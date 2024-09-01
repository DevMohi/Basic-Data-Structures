#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> myList = {10,20,30,40,50,60,70};

    list<int> newList = {40,50,60,70,80,90};
    vector<int> v= {70,80,90};
    int a[2] = {101,200};

    // Assign 

    // list <int> newList;
    // newList = myList;  //assign easy
    // newList.assign(myList.begin(),myList.end()) //another assign method 

    // Push and pop methods 
    //Push back - tail e add
    // myList.push_back(10);
    // myList.pop_back();

    // //Pop front  and push front 
    // myList.push_front(200); //head e add korbe
    // myList.pop_front(); //front theke remove korbe 

    // Insert method -> next function is a shortcut  
    // myList.insert(next(myList.begin(),2) , 100); 

    //More methods of inserting - multiple values
    // myList.insert(next(myList.begin(),2) , {100,200}); 


    //Inserting list 
    myList.insert(next(myList.begin(),2) , newList.begin(), newList.end());

    //Inserting vector 
    myList.insert(next(myList.begin(),2) , v.begin(), v.end());

    //Inserting array 
    myList.insert(next(myList.begin(),2) , a,a+2);


    //erase 
    // myList.erase(next(myList.begin(),2)); 

    //erase values  - aita 2 theke 4 er modde values delete kore dibe 
    myList.erase(next(myList.begin(),2), next(myList.begin(),3));  

    //replace
    replace(myList.begin(), myList.end(), 30 ,100); //jotogula 30 value ase 100 die replace kore dibo 

    // for(int val: myList){
    //     cout<<val<<endl;
    // }

    //Find 
    auto it = find(myList.begin(), myList.end(), 60);
    if(it == myList.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    return 0;
}