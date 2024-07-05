#include <iostream>
using namespace std;
int main() {
  int n, i, j = 1;

  i = 1;
  cout << "Enter a number : ";
  cin >> n;

  while (j <= n) {
    i = 1;
    while (i <= n) {
      cout << "*";
      i = i + 1;
    }
    cout << endl;

    j = j + 1;
  }

  return 0;
}
