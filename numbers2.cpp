#include <iostream>
using namespace std;
int main() {
  cout << "Enter a number : ";
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int num = 1;
    int j = 1;
    while (j <= n) {
      cout << num;
      num = num + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  return 0;
}
