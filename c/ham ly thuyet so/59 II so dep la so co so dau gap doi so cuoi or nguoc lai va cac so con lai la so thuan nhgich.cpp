#include <stdio.h>
#include <math.h>
#include <string.h>
// so dep la so ma so dau gap doi so coi hoac nguoc lai cac so con lai la thuan nghich 
 
int sol(char c[]){
	int d = c[0] - '0',cuoi = c[strlen(c)-1]-'0';
	if(d != 2*cuoi && cuoi != 2*d )return 0;
	int l = 1 , r = strlen(c)-2;
	while(l < r){
		if(c[l]!=c[r] )return 0;
		l++;r--;
		 
	}	
	return 1; 

} 
//int main(){
//	char c[20];scanf("%s", &c);
//	if(sol(c))printf("yes");
//	else printf("no"); 

// code trau

//ham thuan nghich 
int  tn(long long n ){
	long long res = 0,tmp = n; 
	while(n){
		res = res*10 +n % 10;
		n /=10; 
	} 
	return tmp == res; 
} 
int ck(long long n){
	long long  c = n %10,res = 0;
	n /= 10; 
	while(n >=10){
		res = res*10 + n % 10;
		n/=10; 
	} 
	if(c != 2*n && n != 2*c)return 0;
	return tn(res);
} 
int main(){
	long long n;
	scanf("%lld", &n);
	if(ck(n))printf("yes");
	else printf("no");
	 
} 


