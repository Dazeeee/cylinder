#include<stdio.h>

int main()
{

	const float PI = 3.14159265359;
	float a, r, d, h, volume;
	a = 2;

	printf("Enter Radius of the Cylinder\n");
	scanf("%f", &d );

	r = d / a;

	printf("Enter height:\n");
	scanf("%f", &h);

	volume = PI * r * r * h;

	printf("Volume of Cylinder is %f\n", volume);


return 0;
}