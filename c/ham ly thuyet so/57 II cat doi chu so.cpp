#include <stdio.h>
#include <math.h>
#include <string.h>
void sol(char c[]){
	int ok = 0;
	for(int i = 0;i <  strlen(c);i++){
		if(c[i] == '1')ok = 1;
		else if(c[i] != '0' && c[i] != '8' && c[i] != '9' ){
			printf("invalid");return;
		}
	}
	if(!ok){
	printf("invalid");return;
	}
	
	ok = 0;
	for(int i = 0;i < strlen(c); i++){
		if(c[i] == '1')printf("1"),ok = 1;
		else if(ok == 1)printf("0");
	}
}
int main(){
	char c[20];scanf("%s", &c);
	sol(c);
	
}
