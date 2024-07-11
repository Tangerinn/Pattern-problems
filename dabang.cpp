#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int row = 1;
  while (row <= n) {

    int col = 1, num = 1;
    // loop 1
    while (col <= n - row + 1) {
      cout << num;
      num++;
      col++;
    }

    col = 1;
    // loop 2 (optimized)
    while (col <= 2 * row - 2) {
      cout << "*";
      col++;
    }
    col = 1;
    int ank = n - row + 1;
    // loop 3

    while (col <= n - row + 1) {

      cout << ank;
      col++;
      ank--;
    }

    cout << endl;
    row++;
  }

  return 0;
}
