#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, det, x, y;
	printf("Please enter sevearl number.\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	det = b * b - 4*a*c;
	if (det >= 0)
	{


		x = (b*b - sqrt(det) / (2 * a));
		y = (b*b - sqrt(det) / (2 * a));
		printf("x=%8.4lf,y=%8.4lf", x, y);
	}
	else
		printf("there is no roots");
		
system("pause");

}