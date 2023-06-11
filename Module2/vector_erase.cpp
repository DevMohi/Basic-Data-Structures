// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //Deleting 4
//     vector<int> v= {1,2,3,4,5};
//     v.erase(v.begin() + 3);

//     for(int x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Multiple value
    //deleting 2,3,4
    // vector<int> v= {1,2,3,4,5};
    // v.erase(v.begin() + 1, v.begin()+4);

    // for(int x:v){
    //     cout<<x<<" ";
    // }

    vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4);
    for(int val: v){
        cout<<val<<endl;
    }
    return 0;
}