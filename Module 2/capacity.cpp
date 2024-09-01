#include<bits/stdc++.h>
using namespace std;

//Vector capacity 

int main(){
    vector<int> v = {1,2,3};
    cout<<v.capacity()<<endl;
    v.push_back(19);
    cout<<v.capacity()<<endl;

    // v.clear(); //Clears the vector elements. Do not delete the memory, only clear the value.


    v.resize(2);
    v.resize(5,3); //baki value gulo 3 hobe
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}