#include <stdio.h>
int main(){

	float f;
	float s;
	float t;
	float p;
	
	printf("Input the first number:");
	scanf("%f",&f);
	
	printf("\nInput the second number:");
	scanf("%f",&s);
	
	printf("\nInput the third number:");
	scanf("%f",&t);
	
	p=f+s+t;
	
	if(f+s>t && s+t>f && t+f>s)
	{
		printf("\nPerimeter = %f",p);
	}
	
	if(f+s<=t || s+t<=f  || t+f<=s )
	{
		printf("\nNot possible to create a triengle..!");
	}
	
	return 7;
}

