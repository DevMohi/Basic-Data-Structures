#include<bits/stdc++.h>
using namespace std;

int main(){
    //Find O(N)
    vector <int> v = {1,2,3,4,5,1,2,3,4,5,3,2};
    auto it = find(v.begin(), v.end(),3);

    //dereference 
    // cout<< *it; 

    if(it == v.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}