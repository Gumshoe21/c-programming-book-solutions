#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
	int radius;
	float volume;

	printf("Please enter the radius of a sphere in meters: ");
	scanf("%d", &radius);
	volume = (4.0f / 3.0f) * (PI * (radius * radius * radius));

	printf("Volume of a sphere with 10 meters radius: %f\n", volume);
}