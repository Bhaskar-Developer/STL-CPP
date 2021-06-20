#include<bits/stdc++.h>

using namespace std;

void print(queue<int> &q) {
  queue<int> gq = q;
  while(!gq.empty()) {
    cout<<gq.front()<<" ";
    gq.pop();
  }
  cout<<endl;
}

int main() {
  queue<int> q{},q2{};

  //inserting values into queue using the push() function
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  
  
  q2.push(60);
  q2.push(70);
  q2.push(80);
  q2.push(90);
  q2.push(100);

  cout<<"Queue after pushing 5 elements: ";
  print(q);
  
  //checking if Queue is Empty
  if(q.empty()==false) {
    cout<<"Queue is Not Empty"<<endl;
  } else {
    cout<<"Queue is Empty"<<endl;
  }

  cout<<"Size of Queue: "<<q.size()<<endl;

  cout<<"Queue Front: "<<q.front()<<endl;

  cout<<"Queue Back: "<<q.back()<<endl;

  cout<<"Queue before pop() operation: ";
  print(q);

  q.pop();
  cout<<"Queue after pop() operation: ";
  print(q);

  cout<<"First Queue before swap() operation: ";
  print(q);

  cout<<"Second Queue before swap() operation: ";
  print(q2);

  q.swap(q2); //swaping the contents of both these queues. 

  cout<<"First Queue after swap() operation: ";
  print(q);

  cout<<"Second Queue after swap() operation: ";
  print(q2);
}
