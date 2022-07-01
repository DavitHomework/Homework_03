#include <stdio.h>
int main(){

	int f;
	int s;
	int t;
	int fo;
	int fi;
	int finish;
	finish = 0;
	int i;
	i=0;

	printf("Input the first number:");
	scanf("%d",&f);

	printf("\nInput the second number:");
	scanf("%d",&s);

	printf("\nInput the third number:");
	scanf("%d",&t);

	printf("\nInput the fourth number:");
	scanf("%d",&fo);

	printf("\nInput the fifth number:");
	scanf("%d",&fi);

	int numbers[] = {f,s,t,fo,fi};

	while (i<=5){
	if(numbers[i] % 2 != 0){
			finish+=numbers[i];
			i++;
		}
		
		else if(numbers[i] % 2 == 0){
			i++;
		}
	}
	printf("\n%d\n",finish);
	
	return 7;
}
