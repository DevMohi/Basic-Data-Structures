//Binary Search 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //Linear search -> o(n)
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){ //O(n)
        cin>>a[i];
    }
    // sort(); 
 
    sort(a,a+n); //O(nlogn)
 
 
    while(q--){ //O(q)
        int x;
        cin>>x;
        bool flag = false;
        int l=0 ;
        int r=n-1;
        //Binary Search 
        while(l<=r){ //O(log(n))
            int mid = (l+r)/2;
            if(a[mid] == x){
                flag = true; 
                // cout<<"found"<<endl; 
            }
            if(a[mid]<x){
                l = mid + 1;
            }
            else{
                r = mid - 1; 
            }
        } 
 
        if(flag == true){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
 
    //Total Complexity
    // O(n log n )
    return 0;
}