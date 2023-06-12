#include<bits/stdc++.h>
using namespace std;

// & represent reference 
void fun(int *&ptr){
    ptr = NULL;
}

int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout<<ptr<<endl;
    return 0;
}