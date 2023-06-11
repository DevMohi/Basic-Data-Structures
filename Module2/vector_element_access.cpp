#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={1,2,3,5,6};
    cout<<v.back()<<endl; //shows the last value
    cout<<v.front()<<endl; //shows the first value 


    // vector <int> :: iterator it; 
    for(auto it = v.begin(); it<v.end(); it++){
        //Make sure to dereference 
        cout<<*it<<" ";
    }
    return 0;
}