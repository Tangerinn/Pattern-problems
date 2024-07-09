//changed the star to cross.
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int row = 1, cross = n;
  while (row <= n) {
    int col = 1;
    while (col <= cross) {

      cout << "x";

      col++;
    }
    // int star = 1;
    // while (star <= row) {
    //   cout << "*";
    //   star++;
    // }
    cross--;
    row++;

    cout << endl;
  }

  return 0;
}
