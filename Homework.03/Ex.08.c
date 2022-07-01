#include <stdio.h>
int main(){
        int o;
        int t;
	printf("Input the Values for X and Y coordinate:");
	scanf("%d %d",&o,&t);
	if(o>0 && t>0){
		printf("The coordinate point (%d,%d) lines in the first quandrant\n",o,t);
	}
	else if(o<0 && t<0){
		printf("The coordinate point (%d,%d) lines in the third quandrant\n",o,t);
	}
	else if(o<0 && t>0){
		printf("The coordinate point (%d,%d) lines in the second quandrant\n",o,t);
	}
	else if(o>0 && t<0){
		printf("The coordinate point (%d,%d) lines in the fourth quandrant\n",o,t);
	}
	else if(o==0 && t>0){
		printf("The coordinate point (%d,%d) lines between first and second quandrants\n",o,t); /*mejtexumem gre vorovhetev chkaroxaca normal angleren tarkmanel x-eri kam y-neri arancqum@*/
	}
	else if(o==0 && t<0){
		printf("The coordinate point (%d,%d) lines between thrid and fourth quandrants\n",o,t);
	}
	else if(o>0 && t==0){
		printf("The coordinate point (%d,%d) lines between first and fourth quandrants\n",o,t);
	}
	else if(o<0 && t==0){
		printf("The coordinate point (%d,%d) lines between second and third quandrants\n",o,t);
	}
	return 7;
}
