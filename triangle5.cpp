#include <iostream>
using namespace std;
int main() {

  cout << "Enter a number : ";
  int n;
  cin >> n;

  int row = 1, space = 0;
  while (row <= n) {

    int col = 1, num = row;

    while (col <= space) {
      cout << " ";
      col++;
    }
    col = 1;

    while (col <= n - row + 1) {
      cout << num;
      col++;
      num++;
    }

    cout << endl;
    row++;
    space++;
  }

  return 0;
}
