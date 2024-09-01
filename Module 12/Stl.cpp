#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> newList;

    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        newList.push_back(val);
    }

    //Sorting with stl list
    newList.sort();

    int count[1001] = {0};
    for(int val: newList){
        if (count[val] > 1){
            continue;
        }
        else if(count[val] == 0){
            count[val]++;
        }
    }

    for(int i=0; i<1001; i++){
        if(count[i] > 0){
            cout<<i<<" ";
        }
    }

    return 0;
}