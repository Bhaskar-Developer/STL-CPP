#include<bits/stdc++.h>

using namespace std;

int main() {
  set<int , greater<int>> set1{};

  set1.insert(60);
  set1.insert(20);
  set1.insert(10);
  set1.insert(80);
  set1.insert(40);
  
  set1.insert(70);
  set1.insert(50);
  set1.insert(30);

  //printing the set that is stored in descending order
  cout<<"Set in Descending order: ";
  for(auto i = set1.begin();i!=set1.end();i++) cout << *i << " ";
  cout<<endl;
  
  //erase multiple elements in the set
  //erase elements from start to element before 50 i.e. 80 70 60 will be removed
  set1.erase(set1.begin(), set1.find(50));
  cout<<"Set after erasing multiple elements: ";
  for(auto i = set1.begin();i!=set1.end();i++) cout << *i << " ";
  cout<<endl;

  //erasing a specific element form set
  set1.erase(50);
  cout<<"Set after erasing one element: ";
  for(auto i = set1.begin();i!=set1.end();i++) cout << *i << " ";
  cout<<endl;
}
