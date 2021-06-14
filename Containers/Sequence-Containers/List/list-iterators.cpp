#include<bits/stdc++.h>

using namespace std;

int main() {
  list<int> List{};

  for(int i=1;i<=10;i++) {
    List.push_back(i);
  }

  //Print List using begin() and end() iterators.
  cout << "List printed using begin() and end() iterators: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout<<endl;

  //Printing List using cbegin() and cend() iterators.
  cout << "List printed using cbegin() and cend() iterators: ";
  for(auto i=List.cbegin();i!=List.cend();++i) {
    cout << *i << " ";
  }
  cout<<endl;

  //Printing List using rbegin() and rend() iterators.
  cout << "List printed using rbegin() and rend() iterators: ";
  for(auto i=List.rbegin();i!=List.rend();++i) {
    cout << *i << " ";
  }
  cout<<endl;

  //Printing List using crbegin() and crend() itrators. 
  cout << "List printed using crbegin() and crend() iterators: ";
  for(auto i=List.crbegin();i!=List.crend();++i) {
    cout << *i << " ";
  }
  cout<<endl;
}   
