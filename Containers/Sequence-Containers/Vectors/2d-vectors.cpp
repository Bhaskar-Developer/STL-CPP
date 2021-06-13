//Program that demonstrates the creation and printing of 2-Dimensional vectors.

#include<bits/stdc++.h>

using namespace std;

int main() {

  //We initialize a vector with m rows and n columns.
  //After initializatio we assign the values to the 2D vector using nested for loops.		
  int m{},n{};
  cout << "Enter the number of rows and colums in the vector: ";
  cin >> m >> n;  

  //Create a 2D vector which has m rows and n columns. 
  vector<vector<int>> vect(m, vector<int>(n));

  //Assign values to 2D vector using nested for loops
  for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) {
      vect[i][j]=i+j+1; //This line assigns the value to the 2D vector at row i and column j.
    }
  }

  //Printing the 2D vector
  cout << "The contents of the 2D vector are:" << '\n';
  
  vector<vector<int>>::iterator row;
  vector<int>::iterator col;
  
  for(row=vect.begin();row!=vect.end();row++) {
    for(col=row->begin();col!=row->end();col++) {
      cout << *col << " ";
    }
    cout << '\n';
  }  
} 

/*
Methods of iteratng over the 2D vectors 

Method 1: Using iterators

vector<vector<int>> vvi{};

vector<vector<int>>::iterator row --> This will be the iterator for row
vector<int>::iterator col --> This will be the column iterator

//The below loops will be used to traverse the 2D vector.
for(row=vvi.begin();row!=vvi.end();row++) {
  for(col=row->begin();col!=row->end();col++) {
    //code that will do stuff
  }
}

Method 2: Using the ranged for loops

vector<vector<int>> vec;

for(auto& row : vec) {
  for(auto& col : row) {
    //Code that will do stuff
  }
}
*/
