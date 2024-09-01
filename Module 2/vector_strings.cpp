//String input without spaces 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<string> v;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         v.push_back(s);
//     }
//     for(string val:v){
//         cout<<val<<endl;
//     }
//     return 0;
// }

//String input without spaces
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    vector<string> v(n);
    // for(int i=0;i<n;i++){
    //     string s;
    //     getline(cin,s);
    //     v.push_back(s);
    // }
    
    for(int i=0;i<n;i++){
        getline(cin,v[i]);
    }
    for(string val:v){
        cout<<val<<endl;
    }
    return 0;
}