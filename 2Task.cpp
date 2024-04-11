#include <iostream>
#include <cmath>
using namespace std;

int getb(int a, int n);

int areaRectangle (int a, int b);

int perimeterRectangle (int a, int b);


int main()
{
  int a;
  int n;
  count<<"a = "<<endl;
  cin>>a;
  cout<<"n = "<<endl;
  cin>>n;
  int b = getb(a,n);
  int area = areaRectangle (a,b);
  int perimetr = perimeterRectangle (a,b);
  cout<<"Area = "<<area<<endl;
  cout<<"Perimetr = "<<perimetr<<endl;
}

int areaRectangle (int a, int b);
{
  return a*b;
}

int perimetrRectangle (int a, int b)
{
  return 2*(a+b);
}

int getb(int a, int n)
{
  return n*a;
}