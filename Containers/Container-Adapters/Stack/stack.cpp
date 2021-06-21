#include<bits/stdc++.h>

using namespace std;

//passing by value so that original stack is unchanged
void showStack(stack<int> s) {
  while(!s.empty()) {
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl; 
}

int main() {
  stack<int> stk{};

  //pushing elements into stack.
  stk.push(10);
  stk.push(20);
  stk.push(30);
  stk.push(40);
  stk.push(50);
  
  cout<<"Stack after pushing 5 elements: ";
  showStack(stk);

  //check if stack is empty
  if(stk.empty()!=false) {
    cout<<"Stack is Not Empty"<<endl;
  } else {
    cout<<"Stack is Empty"<<endl;
  }

  //printing the size of the stack
  cout<<"Stack Size: "<<stk.size()<<endl;

  //printing the top element of the stack
  cout<<"Stack Top: "<<stk.top()<<endl;

  //removing 2 elements from the stack
  stk.pop();
  stk.pop();
  cout<<"Stack after popping 2 elements: ";
  showStack(stk);
}
