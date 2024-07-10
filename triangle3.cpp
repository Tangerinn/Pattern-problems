#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int row = 1, dum = n;
  while (row <= n) {

    int col = 1;
    while (col <= dum) {
      cout << "x";
      col++;
    }
    cout << endl;
    row++;
    dum--;
  }

  return 0;
}
