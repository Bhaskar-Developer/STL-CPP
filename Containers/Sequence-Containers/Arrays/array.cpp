#include<bits/stdc++.h>

using namespace std;

int main() {
  array<int,6> arr = {1,2,3,4,5,6};
  array<int,6> arr2 = {7,8,9,10,11,12};
  
  cout << "Printing Array elements using at(): ";
  for(int i=0;i<6;i++) {
    cout << arr.at(i) << " ";
  }
  cout<<endl;

  cout << "Printing Array elements using get(): ";
  //for loop cannot be used with get() method
  cout<< get<0>(arr)<< " ";
  cout<< get<1>(arr)<< " ";
  cout<< get<2>(arr)<< " ";
  cout<< get<3>(arr)<< " ";
  cout<< get<4>(arr)<< " ";
  cout<< get<5>(arr)<<endl;
  
  cout << "Printing Array elements using operator[]: ";
  for(int i=0;i<6;i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;

  cout << "Front of Array: " << arr.front() << endl;
  cout << "Back of Array: " << arr.back() << endl;

  //max_size() and size() will return the same value since array is always predefined with a size.
  cout << "Max Size of Array: " << arr.max_size() << endl;
  cout << "Size of Array: " << arr.size() << endl;
  
  cout << "First Array before swap() operation: ";
  for(int i=0;i<6;i++) {
    cout << arr.at(i) << " ";
  }
  cout<<endl;
  
  cout << "Second Array before swap() operation: ";
  for(int i=0;i<6;i++) {
    cout << arr2.at(i) << " ";
  }
  cout<<endl;
  
  //swaping the contents of array one with array two.
  arr.swap(arr2);

  cout << "First Array after swap() operation: ";
  for(int i=0;i<6;i++) {
    cout << arr.at(i) << " ";
  }
  cout<<endl;
  
  cout << "Second Array after swap() operation: ";
  for(int i=0;i<6;i++) {
    cout << arr2.at(i) << " ";
  }
  cout<<endl;
  
  //check if Array one is Empty
  if(arr.empty()==false) {
    cout << "First Array is Not Empty"<<endl;
  } else {
    cout << "First Array is Empty"<<endl;
  }

  //filling array one with 0's using the fill() operation
  arr.fill(0);

  cout << "First Array after filling it with 0's using fill() operation: ";
  for(int i=0;i<6;i++) {
    cout << arr.at(i) << " ";
  }
  cout<<endl;
}
