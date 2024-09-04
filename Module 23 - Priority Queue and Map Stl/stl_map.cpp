#include<bits/stdc++.h>
using namespace std;

int main(){
    //Map kono order follow korena 
    map<string,int> mp;
    // mp.insert({"sakib al hasan", 75});
    // mp.insert({"Tamim SHamim", 85});
    // mp.insert({"Farhan", 55});

    //Way of inserting 
    mp["sakib"] = 75; //O(LogN)
    mp["akib"] = 100;
    mp["tamim"] = 79;


    //Iterator die loop kora lage 
    for(auto it = mp.begin(); it!= mp.end(); it++){
        cout<< it-> first <<" "<<it -> second<<" "; //O(LogN)
    }

    //key die value find korte parba , will return the value , ar jodi key exist na kore then it will return 0 

    if(mp.count("Farhan")){
        cout<<"Ase"<<endl;
    }
    else{
        cout<<"Nai"<<endl;
    }
    return 0;
}