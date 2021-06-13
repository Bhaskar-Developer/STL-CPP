#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> vect{};

  for(int i=1;i<=10;i++) {
    vect.push_back(i);
  }

  cout << "Output using begin() and end() iterators: ";
  for(auto i=vect.begin();i!=vect.end();++i) {
    cout << *i << " ";
  } 
  cout<<endl;

  cout << "Output using cbegin() and cend() iterators: ";
  for(auto i=vect.cbegin();i!=vect.cend();++i) {
    cout << *i << " ";
  }
  cout<<endl;

  cout << "Output using rbegin() and rend() iterators: ";
  for(auto i=vect.rbegin();i!=vect.rend();++i) {
    cout << *i << " ";
  }
  cout<<endl;

  cout << "Output using crbegin() and crend() iterators: ";
  for(auto i=vect.crbegin();i!=vect.crend();++i) {
    cout << *i << " ";
  }
  cout<<endl;
}
