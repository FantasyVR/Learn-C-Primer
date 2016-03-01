#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926
int main()
{
	double origin_x,origin_y,origin_z,point_x,point_y,point_z;
	printf("Please input the coordinate of orgin\n");
	scanf("%lf %lf %lf",&origin_x,&origin_y,&origin_z);
	printf("Please input the coordinate of point\n");
	scanf("%lf %lf %lf",&point_x,&point_y,&point_z);

	double radius,volume;
	
	radius = sqrt((origin_x-point_x)*(origin_x-point_x)+\
					(origin_y-point_y)*(origin_y-point_y)+\
					(origin_z-point_z)*(origin_z-point_z));
	printf("the radius is:%.4lf\n",radius);

	volume = 4 * PI * radius * radius/3;
	printf("the volume is:%.4lf\n",volume);

	return 0;
}
