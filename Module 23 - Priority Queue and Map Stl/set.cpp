// set sorted akare rakhe and duplicate allow korena and search korte pare O(logN) because it uses balanced binary tree

//Insert korar ste ste sort kore and duplicate bad die de. 
// Shob jinish korbar jnno NLogN 
// Search korte pare 

#include<bits/stdc++.h>
using namespace std;

int main(){
    // Shob kaaj logN e hoi for set 
    set<int> s;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.insert(x); //O LogN -> insert korle sort o kore fele  and duplicate remove kore fele 
    }
    //Search - O(LogN) 
    if(s.count(100)){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }

    //Traverse 
    for(auto it = s.begin(); it!= s.end(); it++){
        cout<<*it<<endl;
    }
    
    return 0;
}