#include<bits/stdc++.h>

using namespace std;

void printList(list<int> List) {
  for(auto i=List.begin();i!=List.end();i++) {
    cout << *i << " ";
  }
  cout<<endl;
}

int main() {
  list<int> List{};

  for(int i=1;i<=10;i++) {
    List.push_back(i);
  }
  
  cout << "List: ";
  printList(List);

  List.pop_front();
  cout << "List after removing front element: ";
  printList(List);

  List.pop_back();
  cout << "List after removing back element: ";
  printList(List);

  List.push_front(10);
  cout << "List after pushing element in the front: ";
  printList(List);
 
  List.push_back(100);
  cout << "List after pushing element in the back: ";
  printList(List);

  //pointing iterator to first element of list
  list<int>::iterator it = List.begin();
  
  //moving iterator to mentioned position i.e. position 5
  advance(it, 5);
  cout << "List after Inserting new Element at a position: ";
  List.insert(it,200);
  printList(List);

  cout << "Resizing the list container";
  List.resize(5);
  cout << "\nNew List after resize() operation ";
  printList(List); 
}
