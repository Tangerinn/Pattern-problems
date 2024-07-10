#include <iostream>
using namespace std;
int main() {

  cout << "Enter a number : ";
  int n;
  cin >> n;

  int row = 1, dum2 = n;
  while (row <= n) {
    int dum = n - row + 1;
    int col = 1, num = 1;
    // loop 1.
    while (col <= n - row + 1) {
      cout << num;
      col++;
      num++;
    }

    col = 1, num = 1;
    // loop 2.
    while (col <= row - 1) {
      cout << "*";
      col++;
    }

    col = 1;
    // loop 3.
    while (col <= row - 1) {
      cout << "*";
      col++;
    }
    col = 1;
    // loop 4.

    while (col <= dum2) {
      cout << dum;
      num--;
      col++;
      dum--;
    }
    cout << endl;
    dum2--;

    row++;
  }

  return 0;
}
