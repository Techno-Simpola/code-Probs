#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Stack{
    //properties
public:    
    int top;
    int size;
    int *arr;

    Stack(int size){
        top = -1;
        this -> size = size;
        arr = new int[size];
    }

    //behaviour
    void push(int ele){
        
        if(top == -1){
            arr[0] = ele;
            top = 0;
        }

        else if(top > size)
            cout << "stack overflow" << endl;

        arr[top + 1] = ele;
        top = top + 1;
    }

    void pop(){

        if(top == -1)
            cout << "stack underflow" << endl;
        else{
            top--;
        }
    }

    int peek(){

        if(top >= 0 && top <=size)
            return arr[top];
            
        else{
            cout << "stack is empty" << endl;
            return -1;
        }
    
    }

    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }

};

int main()
{
    Stack s(10);

    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    s.push(35);

    int peek = s.peek();
    cout << "peek element: " << peek << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.pop();
    s.pop();

    peek = s.peek();
    cout << endl << "peek element: " << peek << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    peek = s.peek();
    cout << endl << "peek element: " << peek << endl;
    cout << s.isEmpty() << endl;

    s.pop();

    peek = s.peek();
    cout << endl << "peek element: " << peek << endl;
    cout << s.isEmpty() << endl;

    return 0;
}