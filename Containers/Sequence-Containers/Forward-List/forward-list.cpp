#include<bits/stdc++.h>

using namespace std;

void print(forward_list<int> &li) {
  for(auto i=li.begin();i!=li.end();i++) {
     cout << *i << " ";
  } 
  cout<<endl;
}

int main() {
  forward_list<int> list1{},list2{},list3{};
  
  //assigning values to forward list using assign() function  
  list1.assign({1,2,3,4,5});
  cout<<"First List created using assign() function: ";
  print(list1);
  
  //filling list with n equal values.
  //EG: filling list with value of 10 that is repeated 5 times
  //here also assign function is used
  list2.assign(5,10);
  cout<<"Second List having same repeated element as value: ";
  print(list2);

  //pushing in the front of the forward list
  list1.push_front(10);
  list1.push_front(20);
  cout<<"First List after pushing two elements in the front: ";
  print(list1);
  
  cout<<"First List after popping an element from the front: ";
  list1.pop_front();
  print(list1);

  //Insert operations on the list
  list3.assign({10,60,70,80,90,100});
  cout<<"Third List before insert() operation: ";
  print(list3);

  forward_list<int>::iterator ptr;

  list3.insert_after(list3.begin(),{20,30,40,50});  
  
  cout<<"Third List after insert() operation: ";
  print(list3);

  //remove operation
  cout<<"Third List before remove() operation: ";
  print(list3);

  list3.remove(10);

  cout<<"Third List after remove() operation: ";
  print(list3);

  //using remove_if() operation
  list3.remove_if([](int x) {
    return x>50;
  });

  cout<<"Third List after remove_if() operation: ";
  print(list3);
}
