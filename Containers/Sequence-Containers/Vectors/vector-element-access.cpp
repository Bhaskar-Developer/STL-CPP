#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> vect{};

  for(int i=1;i<=10;i++) {
    vect.push_back(i*10);
  }

  cout << "Reference Opperator [g] : vect[3] = " << vect[3] << '\n';

  cout << "at operation : vect.at(5) = " << vect.at(5) << '\n';

  cout << "front operation: vect.front() = " << vect.front() << '\n';

  cout << "back operation: vect.back() = " << vect.back() << '\n';

  //Pointer to the first element
  cout << "Getting pointer to internal array of vector using data() operation" << '\n';
  int* pos = vect.data();

  cout << "The first element using this pointer is: " << *pos << '\n';
}
