#include <stdio.h>
int main(){

	int f;
	int i;
	i=1;
	
	printf("Input the number:");
	scanf("%d",&f);

	printf("All the divisor of %d are:\n",f);
	while(i<=f){
		if(f % i == 0){
			printf("%d\n",i);
			i++;
		}
		
		else if(f % i != 0){
			i++;
		}
	}
	return 7;
}

