#include <stdio.h>
#include <math.h>
 
int main(){
	int a,b;scanf("%d%d", &a, &b);
	int c1 = sqrt(a), c2 = sqrt(b);
	if(c1*c1!= a) a++;
	printf("%d" , c2-c1+1);
		
	} 
