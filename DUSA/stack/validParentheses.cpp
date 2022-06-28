#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char bracket = str[i];

        // if openeing bracket...
        if (bracket == '[' || bracket == '{' || bracket == '(')
        {
            s.push(bracket);
        }
        // if closing bracker
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if ((top == '[' && bracket == ']') ||
                    (top == '{' && bracket == '}') ||
                    (top == '(' && bracket == ')'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
        return true;
    else
        return false;
}

int main(){
    string str = "()()(){}{}{[()]}()((({})))";
    bool theek = isValidParenthesis(str);

    cout << "bool value: " << theek << endl;
    return 0;
}