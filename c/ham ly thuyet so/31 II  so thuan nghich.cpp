#include <stdio.h>
#include <math.h>
 
//#include <string.h> 
int stn(long long  n){
	long long  tmp = n;
	long long ss = 0; 
	while(n){
		ss = ss*10 + n % 10;
		n /= 10; 
	} 
	if( tmp == ss) return 1;
	return 0; 
} 
//int stn2(char c[]){
//	int l = 0, r = strlen(c) - 1; 
//	while (l < r ){
//		if(c[l] != c[r]) return 0; 
//		l++;r--; 
//	}
//	return 1; 
//}
int main(){
	//char c[100]; scanf("%s", &c );
	long long n;scanf("%lld" ,&n);
	if(stn(n))printf("yes");
	else printf("no");
	 
	 
} 
