#include <iostream>
using namespace std;
int main() {

  cout << "Enter a number : ";
  int n;
  cin >> n;

  int row = 1, space = n - 1,num=1;
  while (row <= n) {

    int col = 1;
    while (col <= space) {
      cout << " ";
      col++;
    }
col=1; //NEED TO RESET COLUMN HERE!!
    while (col <= row) {
      cout << num;
      col++;
    }


    cout<<endl;
    row++;
    space--;
    num++;
  }

  return 0;
}
