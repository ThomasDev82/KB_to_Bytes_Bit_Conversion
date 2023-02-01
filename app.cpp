#include <iostream>
using namespace std;

int main()
{

  int number;
  cin >> number;

  double num_of_bytes = number * 1024;
  double num_of_Bits = num_of_bytes * 8;

  cout << "The Number Of Kilobytes That User Input : " << number << "\n";
  cout << "The Number Of Bytes : " << num_of_bytes << "\n";
  cout << "The Number Of Bits : " << num_of_Bits;

  return 0;
}