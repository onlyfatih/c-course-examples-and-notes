#include<stdio.h>
int main ()
{
	int x=7 , y=25;
	int max = (x>y ? x : y); // ( kosul ? true(1) : false(0) ) //
	printf("max=%d" , max);
	
	int z=27;
	z = (z==27 ? 58 : 35);
	printf("\nz=%d" , z);
}
