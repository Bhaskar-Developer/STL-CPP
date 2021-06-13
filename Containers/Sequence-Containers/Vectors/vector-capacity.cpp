#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> vect{};

  for(int i=1;i<=10;i++) {
    vect.push_back(i);
  }

  cout << "Size: " << vect.size() << '\n';
  cout << "Capacity: " << vect.capacity() << '\n';
  cout << "Max Size of Vector: " << vect.max_size() << '\n';

  //Resize the vector to size 5
  vect.resize(5);

  cout << "Size of vector after resize() operation: " << vect.size() << '\n';

  //Check if Vector is Empty or Not
  if(vect.empty() == false) {
    cout << "Vector is not Empty" << '\n';  
  } else {
    cout << "Vector is Empty" << '\n';
  }

  //Shrink the vector
  vect.shrink_to_fit();
  cout << "Vector elements after shrink operation are: ";
  for(auto i=vect.begin();i!=vect.end();++i) {
    cout << *i << " ";
  }
  cout<<endl;
}
