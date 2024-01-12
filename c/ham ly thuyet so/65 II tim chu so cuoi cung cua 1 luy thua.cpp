// tim chu so cuoi cung cua 1 luy thua  
//vd 2^5 thi 32 = [2]

//vd  mun tinh chu so cua cung cua 12345444354534^n chi can tinh 4^n  

//chu so cuoi cung cua x  neu n la ..

//
//n du: 1 2 3 0 
//0^n : 0 
//1^n : 1
//2^n : 2 4 8 6  
//3^n : 3 9 7 1 
//4^n : 4 6 4 6 
//5^n : 5
//6^n : 6
//7^n : 7 9 3 1
//8^n : 8 4 2 6 
//9^n : 9 1 9 1  
#include <stdio.h>
#include <math.h>
#include <string.h>

char  a[1000001],n[1000001]; 
int main(){
	scanf("%s%s",a,n);
	int tmp = a[strlen(a)-1] - '0'; // chu so cuoi cung cua a 
	if(tmp == 0 || tmp == 1 || tmp == 5 || tmp == 6){
		printf("%d",tmp);
		return 0; 
	}
	int r;
	if(strlen(n) == 1)r = n[0]-'0';// chu so cuoi cung cua n neu n co 1 so 
	else r = n[strlen(n)-2]-'0'; // 2 chu so cua cung cua n neu n co 2 so tro len 
	int so2[4] = {6,2,4,8};// vi du n chia 4 du 0 thi in ra 6 vi 2^4 = 16  
	int so3[4] = {1,3,9,7};
	int so4[4] = {6,4,6,4};
	int so7[4] = {1,7,9,3};
	int so8[4] = {6,8,4,2};
	int so9[4] = {1,9,1,9};
	r%=4;// tim so du cua n de in so cuoi cung 
	if(tmp == 2 )printf("%d",so2[r]);
	else if(tmp == 3)printf("%d",so3[r]);
	else if(tmp == 4)printf("%d",so3[r]);
	else if(tmp == 7)printf("%d",so7[r]);
	else if(tmp == 8)printf("%d",so8[r]);
	else if(tmp == 9)printf("%d",so9[r]);
	
		 
	
} 
 
