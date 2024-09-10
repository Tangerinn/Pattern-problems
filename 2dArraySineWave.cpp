#include <iostream>
#include <vector>
using namespace std;

// int number(vector<vector<int>> &nums)
// {
//   // number of rows= nums.size()
//   // number of colums nums[row].size()
// }

void printArray(vector<vector<int>> &nums) // in a sine wave pattern - works for matrices onluy
{
  int noRows = nums.size();
  int noCols = nums[1].size();

  for (int col = 0; col < noCols; col++)
  {
    if (col % 2 == 0)
    {
      for (int row = 0; row < noRows; row++)
      {
        cout << nums[row][col] << " ";
      }
    }
    else
    {
      for (int row = noRows - 1; row > -1; row--)
      {
        cout << nums[row][col] << " ";
      }
    }
  }
}

int main()
{

  vector<vector<int>> nums =
      {
          {1, 2, 10},
          {3, 4, 11}

      };

  printArray(nums);
}
