#include <iostream>
using namespace std;
int main() {

  int i = 1, n;
  cout << "Enter a number : ";
  cin >> n;

  while (i <= n) {
    int j = 1;
    while (j <= n) {

      char ch= 'A' +i-1; //IMP!! 
      //'A'---> tells the compiler your'e refering to the CHARACTER A.
      //The compiler uses the ASCII value of 'A'(i.e 65) to perform 
      //the calculation.
      cout << ch;
      j++;
    }
    cout << endl;

    i++;
  }

  return 0;
}
