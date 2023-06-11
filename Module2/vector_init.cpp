#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v; Type1 

    // vector<int> v(5,0); 

    //Type 4 - Copying from another initialized vector
    // vector <int> v2(5,100);
    // vector <int> v(v2);

    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

    //Type 5
    int a[6] = {1,2,3,4,5,6};
    vector <int> v(a, a+6);
   

    return 0;
}