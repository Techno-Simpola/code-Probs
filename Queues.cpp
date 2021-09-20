#include<bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(6);
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;
}