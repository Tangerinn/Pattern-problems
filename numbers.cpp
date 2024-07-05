#include <iostream>
using namespace std;
int main() {
  cout << "Enter a number : ";
  int n;
  cin >> n;
  int num = 1;
  int j = 1;
  while (j <= n) {

    int i = 1;

    while (i <= n) {

      cout << num;
      i = i + 1;
    }
    cout << endl;
    j = j + 1;
    num = num + 1;
  }

  return 0;
}
