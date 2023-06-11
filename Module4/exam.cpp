//Get Prefix sum 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int n;
//     cin>>n;
//     long long int ar[n];
//     for(int i=0; i<n; i++){
//         cin>>ar[i];
//     }
//     long long int pre[n];
//     pre[0] = ar[0];
//     for(int i=1; i<n; i++){
//         pre[i] = ar[i] + pre[i-1];
//     }

//     for(int i=n-1; i>=0; i--){
//         cout<<pre[i]<<" ";
//     }
//     return 0;
// }

//Sorted

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n;
//         cin>>n;
//         int ar[n];
//         //2 4 6 7 10
//         for(int i=0; i<n;i++){
//             cin>>ar[i];
//         }
//         bool flag = true;
//         for(int i=0; i<n-1;i++){
//             if(ar[i] > ar[i+1]){
//                 flag = false;
//             }
//         }
//         if(flag == true){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }


//Duplicates
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    //Reduces time complexity
    sort(ar,ar+n);

    bool flag = true;
    for (int i = 0; i < n-1; i++) {
        if(ar[i] == ar[i+1]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}


//Printing X
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ar[n][n];

//     for(int i=0;i<n;i++){
//         for(int j=0; j<n;j++){
//             // if(i/2 == j/2){
//             //     cout<<("X");
//             if(i == n/2 && j==n/2){
//                 printf("X");
//                 break;
//             }
//             if((i+j)== (n-1)){
//                 cout<<("/");
//             }
//             else if(i==j){
//                 cout<<("\\");
//             }
//             else{
//                 cout<<(" ");
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Insert it

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int m;
//     cin>>m;
//     vector<int> b(m);
//     for(int i=0; i<m; i++){
//         cin>>b[i];
//     }
//     int x;
//     cin>>x;
//     //Kon position , ar pura b add korbo
//     a.insert(a.begin()+x, b.begin(), b.end());

//     for(int val: a){
//         cout<<val<<" ";
//     }
//     return 0;
// }