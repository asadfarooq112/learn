#include <stdio.h>
#include <math.h>


void main(void)
{
	long int n, num;
	int count = 0;

	scanf("%ld", &num);
	n = num; 

	do 
	{
   		 n /= 10;
    		++count;
  	} 
	while (n != 0);
	printf("count is %i\n", count);

	int c = count;

	int p1 = pow(10,c-1) +1e-9 ;
	long int one = num /p1;
	printf("first is %ld\n", one);		
	
	int p2 = pow(10,c-2) +1e-9 ;
	long int two = num/(p2) % 10;
	printf("second is %ld\n", two);	
	
	int p3 = pow(10,c-3) +1e-9 ;
	long int three = num/(p3) % 10;
	printf("third is %ld\n", three);	

	int p4 = pow(10,c-4) +1e-9 ;
	long int four = num/(p4) % 10;
	printf("fourth is %ld\n", four);	
	
	int p5 = pow(10,c-5) +1e-9 ;
	long int five = num/(p5) % 10;
	printf("fifth is %ld\n", five);	

	
	

}