#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    // v.erase(v.begin() + 3); //ekta delete korte chaile 

    // for multiple deletion 
    v.erase(v.begin() + 1, v.begin() + 3); // 1 4 5 paba  3 dile 2 index porjonto delete korbe 

    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}