#include<bits/stdc++.h>

using namespace std;

void showDeque(deque<int> &dq) {
  for(auto i=dq.begin();i!=dq.end();i++) {
    cout<<*i<<" ";
  }
  cout<<endl;
}

int main() {
  deque<int> dq{};
  
  dq.push_back(10);
  dq.push_back(30);
  dq.push_back(60);
  dq.push_back(80);
  dq.push_back(70);
  dq.push_back(90);
  dq.push_back(0);
  
  cout<<"Deque: ";
  showDeque(dq);

  cout<<"Front: "<<dq.front()<<endl;
  cout<<"Back: "<<dq.back()<<endl;

  cout<<"Deque after Popping Front: ";
  dq.pop_front();
  showDeque(dq);

  cout<<"Deque after Popping Back: ";
  dq.pop_back();
  showDeque(dq);
  
  cout<<"Deque after Pushing in Front: ";
  dq.push_front(100);
  showDeque(dq);
  
  cout<<"Deque after Pushing in Front: ";
  dq.push_front(200);
  showDeque(dq);

  cout<<"Max Size: "<<dq.max_size()<<endl;
  cout<<"Size: "<<dq.size()<<endl;
}
