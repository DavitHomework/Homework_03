#include <stdio.h>
int main(){
	int f;
	int s;
	int t;
	
	
	printf("Inpute the values of three numbers :");
	scanf("%d %d %d",&f,&s,&t);
	printf("1st Number = %d,       2nd Number = %d,       3rd Number = %d.",f,s,t);
	
        if(f>s && f>t){
        	printf("\n1st number is greatest among three.\n");
        }
        else if(s>f && s>t){
       		printf("\n2sd number is greatest among three.\n");
        }
        else if(t>f && t>s){
        	printf("\n3rd number is greatest among three.\n");
        }
        return 7;
}
