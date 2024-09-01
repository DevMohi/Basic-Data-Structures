#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    
    for (char c : s) {
        freq[c - 'a']++;  // Increment the frequency of the corresponding letter
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letter = i + 'a';  
            cout << letter << " : " << freq[i] << endl;  
        }
    }
 
    return 0;
}
