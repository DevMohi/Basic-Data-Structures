// Vector constructor 
//Initialization

//Size bolte hoina because dynamic array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    //Type 1 
    // vector<int> v; 
    //vector<int> v= {1,2,3};

    // Type 2 
    // vector <int> v2(5);  

    // Type 3 
    // vector <int> v3(5,10);
    //Type 3



    ///copying -> Type 4 
    // vector<int> v2(5,100);
    // vector<int> v(v2);

    // Type 5 - Construct a vector by copying all elements from an array A of size N.
    int a[6] = {1,3,2,5,4,6};
    vector<int> v(a,a+6);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}