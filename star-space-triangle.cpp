#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int row = 1, space = n - 1;
  while (row <= n) {
    int col = 1;
    while (col <= space) {

      cout << " ";

      col++;
    }
    int star = 1;
    while (star <= row) {
      cout << "*";
      star++;
    }
    space--;
    cout << endl;
    row++;
  }

  return 0;
}
