#include <iostream>
using namespace std;
int main() {
  cout<<"Enter a number : ";
  int n;
  cin>>n;
  //1
  for(int row=1;row<(n/4);row++)
    {

      for(int col=1;col<(n/4)-row+1;col++)
        {
          cout<<" ";
        }

//2
      for(int col=1;col<=(2*row)-2 ;col++)
  {
    cout<<"x";
  }

     //3
          for(int col=1;col<(n/4)-row+1;col++)
            {
              cout<<"  ";
            }
      //4 
      for(int col=1;col<=(2*row)-2;col++)
        {
          cout<<"x";
        }
      cout<<endl;
      
    }

for(int row=1;row<=25;row++)
  {
    //5
    for(int col=1;col<=row;col++)
      {
        cout<<" ";
      }

    //6

    for(int col=3;col<=n-2*row-1;col++)
      {
        cout<<"x";
      }
    cout<<endl;
  }
cout<<"5i<15u";


return 0;
  
}
