#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkRedundancy(string &s){

    stack<char> st;
    int len = s.length();

    for(int i=0; i<len; i++){
        if(s[i] == '(' ||
           s[i] == '*' ||
           s[i] == '+' ||
           s[i] == '-' ||
           s[i] == '/'){
            char ch = s[i];
            st.push(ch);
        }
        else{

            if(s[i] == ')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if (top == '*' ||
                        top == '+' ||
                        top == '-' ||
                        top == '/'){
                            isRedundant = false;
                        }
                    st.pop();
                }

                if(isRedundant == true)
                    return true;
                    
                st.pop();
            }

        }
    }

    return false;
}

int main(){
    string s = "( a + (b * c))";

    bool ans = checkRedundancy(s);
    cout << ans << endl;
    return 0;
}