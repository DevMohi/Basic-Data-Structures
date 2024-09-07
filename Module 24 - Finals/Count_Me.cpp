//Solved 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t; i++){
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss;
        ss<<sentence;

        map<string, int> mp;
        int max = INT_MIN;
        string max_word;
        while(ss>> word){
            mp[word]++;
            if (mp[word] > max) {
   
                max = mp[word]; // will return value since the key is called. 
                max_word = word;
                // cout<<mp[word]<<" "<<max<<" "<<word<<endl;
            } 
        }

        
        cout << max_word << " " << max<< endl; 
        
    }
    return 0;
}