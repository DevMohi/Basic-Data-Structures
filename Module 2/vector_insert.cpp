#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v2 = {100,10,11,12,13};
    //pointer dite hobe 

    //Normally ekta position e 10 add korte chaile 
    // v.insert(v.begin()+2 ,10); 

    // pura ekta vector add korte chaile 
    v.insert(v.begin()+2,v2.begin(), v2.end());

    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}