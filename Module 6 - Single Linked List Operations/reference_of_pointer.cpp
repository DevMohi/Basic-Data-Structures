#include<bits/stdc++.h>
using namespace std;


//Reference hishene patano taile aikaner p ar ptr same hobe
void fun(int * &p){
    // *p = 30; 
    // p = NULL;
}

int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout<<ptr<<endl;
    return 0;
}