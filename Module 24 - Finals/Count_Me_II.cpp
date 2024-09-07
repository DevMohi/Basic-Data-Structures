#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0 ; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> freq;

        for(int i=0; i<n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int maxC =0 ;
        int maxValue = INT_MIN;

        for(auto it: freq){
            if(it.second > maxC){
                maxC = it.second;
                maxValue = it.first; 
            }
            //This is for determining max value
            else if(it.second == maxC && it.first > maxValue){
                maxValue = it.first; 
            }
        }

        cout << maxValue << " " << maxC << endl;
    }



    return 0;
}