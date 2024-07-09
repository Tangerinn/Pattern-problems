#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  int row = 1;
  while (row <= n) {
    int col = 1;
    char ch = 'A' - row + n;
    while (col <= row) {

      cout << ch << " ";
      ch++;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}
