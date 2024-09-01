#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,2,4,3,5,1,2,4,5,3,2};
    // shob 2 ke 100 die replace korbe 
    // replace(v.begin(), v.end() , 2 , 100); 
    // replace(v.begin(), v.end() - 1 , 2 , 100);  

    //Find ekta pointer ba iterator ferot de
    auto it = find(v.begin(),v.end(),2);
    cout<<*it;

    if(it == v.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    // for(int x: v){
    //     cout<<x<<" ";
    // }
    return 0;
}