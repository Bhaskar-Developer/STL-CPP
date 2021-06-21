#include<bits/stdc++.h>

using namespace std;

void show(priority_queue<int> q){
  while(!q.empty()) {
    cout<<q.top()<<" ";
    q.pop();
  }
  cout<<endl;
}

int main() {
  priority_queue<int> q{};

  //inserting 5 elements into the priority Queue
  q.push(10);
  q.push(30);
  q.push(50);
  q.push(20);
  q.push(40);
  
  cout<<"Priority Queue after inserting 5 elements: ";
  show(q);

  //check if Priority Queue is empty
  if(q.empty()==true) {
    cout<<"Priority Queue is Empty"<<endl; 
  } else {
    cout<<"Priority Queue is Not Empty"<<endl;
  }

  cout<<"Size of Priority Queue: "<<q.size()<<endl;

  cout<<"Front of Priority Queue: "<<q.top()<<endl;

  //popping 2 elements from Priority Queue
  q.pop();
  q.pop();
  
  cout<<"Priority Queue after Popping two elements:";
  show(q);
}
