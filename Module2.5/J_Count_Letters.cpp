#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string S;
    cin >> S;
    vector<int> freq(26, 0);
    
    for (char c : S) {
        freq[c - 'a']++;  // Increment the frequency of the corresponding letter
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letter = i + 'a';  
            std::cout << letter << " : " << freq[i] << std::endl;  
        }
    }
    return 0;
}