#include <iostream>
using namespace std;

int main() 
{
  double length;
  double width;
  double area;
  double perimeter;
  
  cout << "Rectangle Properties." << endl;

  length = 7.2;
  width = 1.3;
  perimeter = 2 * (7.2 + 1.3);
  area = 7.2 * 1.3;

  cout << "Length = " << length << endl; 
  cout << "Width = " << width << endl;
  cout << "Perimeter = " << perimeter << endl;
  cout << "Area = " << area << endl;

  return 0;
}