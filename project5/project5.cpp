
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Russian");

	int a;
	int b;
	int c;
	int P;
	int p;
	int x1;
	int x2;
	int x3;
	int y1;
	int y2; 
	int y3;
	int S;
	int p2;
	cin >> x1, y1 ,"Координаты первой точки через пробел" ;
	cin >> x2, y2, "Координаты первой точки через пробел";
	cin >> x3, y3, "Координаты первой точки через пробел";


a = sqrt((x2 - x1) + (y2 - y1));
b = sqrt((x3 - x2) + (y3 - y2));
c = sqrt((x3 - x1) + (y3 - y1));
P = a + b + c;
p2 = P / 2;
S = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
cout << P, "Периметр:";
cout << S, "Площадь: ";




return 0;
}
