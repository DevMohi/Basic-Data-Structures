// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n;
//         cin>>n;
//         vector<int> v(n);

//         for(int i=0 ; i<n; i++){
//             cin>> v[i];
//         }

//         // sorting 
//         sort(v.begin(),v.end(), greater<int>());

//         cout<<endl;
//         vector<int> v2;

//         v2.push_back(v[0]);
//         for(int i=1; i<n; i++){
//             if(v[i] != v[i-1]){
//                 v2.push_back(v[i]);
//             }
//         }

//         for(int x: v2){
//             cout<<x<<" ";
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t; i++){
        set<int , greater<int>>s;
        int n;
        cin>>n;

        while(n--){
            int x;
            cin>>x;
            s.insert(x);
        }

        for(auto it = s.begin(); it!= s.end(); it++){
            cout<<*it<<" "; 
        }
        cout<<endl;
    }
    return 0;
}