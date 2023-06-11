#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,3,4,5};
    vector<int> v2 = {100,101,10,2,103};

    //If you want to insert the whole v2 in v
    // v.insert(v.begin()+2, v2.begin(), v2.end()); 
    v.insert(v.begin()+2, 20); 
    //Cant get index here
    for(int x: v){
        cout<<x<<" ";

    }
    return 0;
}