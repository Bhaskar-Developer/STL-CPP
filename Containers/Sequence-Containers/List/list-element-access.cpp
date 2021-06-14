#include<bits/stdc++.h>

using namespace std;

int main() {
  list<int> List{};
  list<int> List2{};

  for(int i=1;i<=10;i++) {
    List.push_back(i);  
  }

  for(int j=1;j<=10;j++) {
    List2.push_back(j*10);
  }

  //Print the List
  cout << "List: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout << endl;
  
  cout << "List Front: " << List.front() << '\n';
  cout << "List Back: " << List.back() << '\n';

  //check if list is empty
  if(List.empty()==false) {
    cout << "List is Not Empty" << '\n';
  } else {
    cout << "List is Empty" << '\n';
  }

  //Reverse List
  List.reverse();
  
  cout << "Reversed List: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout << endl;

  //Print the Max Size of the List
  cout << "Max Size of List: " << List.max_size() << '\n';

  //Insert 4 7 8 in list
  cout << "Pushing 4,7 and 8 at end of the List" << '\n';
  List.push_back(4);
  List.push_back(7);
  List.push_back(8);
  
  //sorting the List 
  List.sort();
  cout << "Sorted List: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout << endl;

  //Remove Duplicate elements from the List
  List.unique();
  cout << "List after removing duplicate elements: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout << endl;

  //Printing the second List
  cout << "List2: ";
  for(auto i=List2.begin();i!=List2.end();++i) {
    cout << *i << " ";
  }
  cout << endl;

  cout << "Merging List and List2" << '\n';
  List.merge(List2);
  cout << "List after merging: ";
  for(auto i=List.begin();i!=List.end();++i) {
    cout << *i << " ";
  }
  cout << endl;

  //Clear the List
  List.clear();
  cout << "List Cleared" << '\n';
  if(List.empty()==false) {
    cout << "List is Not Empty" << '\n';
  } else {
    cout << "List is Empty" << '\n';
  }
}
