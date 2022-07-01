#include <stdio.h>
int main(){

	int q;
	int i;
	int l;

	i=0;
	l=0;

	printf("Input the size of the square:");
	scanf("%d",&q);

	for(i=0;i<q;i++){
		l=0;
		while (l<q){
		
			printf("# ");
			
			if (l==q-1){
				printf("\n");
			}
			l++;
		}
	}
	return 7;
}
