//Copying
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //Copy kortese 
//     list<int> myList = {10,20,30};
//     list<int> newList;
//     // 1st way 
//     // newList = myList; preffered 

//     // 2nd way 
//     newList.assign(myList.begin(), myList.end());
    
//     for(int val: newList){
//         cout<<val<<endl;
//     }
//     return 0;
// }


//     //push_back
//     //push_front

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,30,50,60,70};
    list<int> newList = {100,200,300};

    // myList.push_back(100); //push at tail
    // myList.push_front(20); //push at head
    // myList.pop_back(); //deletes at tail
    // myList.pop_front(); // deletes at head

    //insert at specific position
    //next hocce ekta function -> this is a kind of loop
    //Complexity =  O(n)
    // myList.insert(next(myList.begin(),0),100);  
    //Multiple insertion
    // myList.insert(next(myList.begin(),0),{100,200,300}); 
    //Mutiple insertion 2 
    // myList.insert(next(myList.begin(),0),newList.begin(),newList.end()); 



    //Delete at specific position
    // myList.erase(next(myList.begin(),2)); 


    //Multiple deletion 
    // myList.erase(next(myList.begin(),2), next(myList.begin(),5)); 


    // replace 
    //Jotota 30 ase shobgulo ke 100 kore dibe
    // replace(myList.begin(), myList.end(),30,100); 


    //find returns to an iterator 
    auto it = find(myList.begin(), myList.end(),90);
    if(it == myList.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    // for(int val: myList){
    //     cout<<val<<endl;
    // }

    //push_back
    //push_front


  
    return 0;
}