#include <iostream>
#include <cmath>
using namespace std;
/
*@brief Рассчитывает значение А
* @param x - константа
* @param y - константа
* @param z - константа
* @return-значение функции А
*/
double getA(const double x, const double y, const double z);

/
*@brief Рассчитывает значение B
* @param x - константа
* @param y - константа
* @param z - константа
* @return-значение функции B
*/
double getB(const double x, const double y, const double z);

/**
* @brief Точка входа в функцию
 * @return- 0 иначе 1
*/
int main() {
  const double x=0.78;
  const double y=1.24;
  const double z=0.5;
  cout << "x=" << x << "y=" << y << "z=" << z << endl;
         cout << "a=" << getA(x,y,z) << "b=" << getB(x,y,z) << endl;
return 0;
}
double getA(const double x, const double y, const double z)
{
  return 2*pow(z,x)/sqrt(pow(y,x)*pow(cos(x+y),2)-3*z);
}
  double getB(const double x, const double y, const double z)
{
  return pow(exp,sqrt(z))*cos(pow(x,2)/y*z)*x;
}
