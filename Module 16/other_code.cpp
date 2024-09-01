#include <bits/stdc++.h>
using namespace std;

string getMixedColor(char color1, char color2) 
{
    if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R'))
        return "P";
    if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R'))
        return "Y";
    if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B'))
        return "C";
    return "";
}

string getFinalColors(const string& colors) 
{
    stack<char> s;
    stack<char> st;
    for (char color : colors) 
    {
        if (!s.empty() && s.top() == color) 
        {
            s.pop();
        } 
        else if (!s.empty()) 
        {
            string mixedColor = getMixedColor(s.top(), color);
            if (!mixedColor.empty()) 
            {
                s.pop();
                for (char ch : mixedColor) 
                {
                    s.push(ch);
                }
            } 
            else 
            {
                s.push(color);
            }
        } 
        else 
        {
            s.push(color);
        }
    }
    string finalColors;
    while (!s.empty()) 
    {
        finalColors = s.top() + finalColors;
        s.pop();
    }
    for (char ch : finalColors) 
    {
        if (ch == 'Y' && !st.empty() && st.top() == 'Y') 
        {
            st.pop();
        } 
        else if (ch == 'P' && !st.empty() && st.top() == 'P') 
        {
            st.pop();
        } 
        else if (ch == 'C' && !st.empty() && st.top() == 'C') 
        {
            st.pop();
        } 
        else 
        {
            st.push(ch);
        }
    }
    while(!st.empty())
    {
        char ch=st.top();
        s.push(ch);
        st.pop();
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return "";
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        string colors;
        cin >> colors;
        // string finalColors = getFinalColors(colors);
        cout << getFinalColors(colors) << endl;
    }
    return 0;
}