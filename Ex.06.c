#include <stdio.h>
int main(){
	int o;
	int t;
	int th;
	
	printf("Input three sides of triangle: ");
	scanf("%d %d %d",&o,&t,&th);
	
	if((o==t && t!=th && th!=o && o+t>th && t+th>o && o+th>t) || (t==th && th!=o && o!=t && o+t>th && t+th>o && o+th>t) || (th==o && o!=t && t!=th && o+t>th && t+th>o && o+th>t)){
		printf("This is isosceles triangle:\n");
	}
	else if(o==t && t==th){
		printf("This is equilateral triangle:\n");
	}
	else if(o*o==t*t+th*th || t*t==o*o+th*th || th*th==o*o+t*t){
		printf("This is right triangle:\n");
	}
	else if(o!=t && t!=th && th!=o && o+t>th && t+th>o && o+th>t){
		printf("This is scalene triangle:\n");
	}
	else if(o+t<=th || t+th<=o  || th+o<=t)
	{
		printf("Not possible to create a triengle:\n");
	} 
	return 7;	
}
