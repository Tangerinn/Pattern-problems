#include <iostream>
using namespace std;
int main() {

  cout << "Enter a number : ";
  int n;
  cin >> n;

  int row = 1, space = n - 1;
  while (row <= n) {

    int col = 1;
    //L-1 :Buils space triangle.
    while (col <= space) {
      cout << " ";
      col++;
    }

    col = 1;
    int num = 1;
    //L-2 :Prints half right angled triangle (till the row number no.)
    while (col <= row) {
      cout << num;
      num++;
      col++;
    }
    col = 1, num = row - 1;
    //L-3 :Prints other half of the triangle
    while (col <= row - 1) {
      cout << num;
      num--;
      col++;
    }

    cout << endl;

    space--;
    row++;
  }

  return 0;
}
