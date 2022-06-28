#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str = "ashutosh";

    stack<char> rev;

    for(int i=0; i<str.length(); i++){
        char c = str[i];
        rev.push(c);
    }

    string ans = "";
    
    while(!rev.empty()){
        char c = rev.top();
        ans.push_back(c);
        rev.pop();
    }

    cout << ans << endl;
    return 0;
}