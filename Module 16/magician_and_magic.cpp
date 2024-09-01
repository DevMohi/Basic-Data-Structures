#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    stack<char> finalColors; 

    string x;
    cin>>x;
    int countY = 0;
    int countP = 0;
    int countC = 0;


    for(char ch : x){
        if(st.empty()){
            st.push(ch);
        }
        else if(!st.empty()){
            char prev = st.top();

            if(ch == prev ){
                st.pop();
            }
    
            else if(ch == 'R' && prev == 'G' || ch == 'G' && prev == 'R'){
                st.pop();
                st.push('Y');

            }
            else if(ch == 'R' && prev == 'B' || ch == 'B' && prev == 'R'){
                st.pop();
                st.push('P');
             
            }
            else if(ch == 'B' && prev == 'G' || ch == 'G' && prev == 'B'){
                st.pop();
                st.push('C');
             
            }
            else{
                st.push(ch);
            }
        }
    }

    while(!st.empty()){
        if(finalColors.empty()){
            finalColors.push(st.top());
            st.pop();
        }
        else if(!finalColors.empty()){

            if(countY > 0 || countP > 0 || countC > 0){
                if(st.top() =='Y' || st.top() == 'P' || st.top() == 'C'){
                    st.pop();
                }
            }
            else{
                
            }
            if(st.top() == 'Y'){
                finalColors.push(st.top());
                countY = 1;

            }
            else if (st.top() == 'P') {
                finalColors.push(st.top());
                countP = 1;
            }
            else if( st.top() == 'C'){
                finalColors.push(st.top());
                countC = 1;
            }
            else{
                finalColors.push(st.top());
            }
        }
    }


    while(!finalColors.empty()){
        cout<<finalColors.top()<<" ";
        finalColors.pop();
    }
    return 0;
}