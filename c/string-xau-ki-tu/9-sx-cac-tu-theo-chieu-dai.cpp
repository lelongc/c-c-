#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void sx(char c[][100],int n){
    for(int i = 0;i < n;i++){
        int m = i;
        for(int j = i+1;j < n;j++){
            if(strcmp(c[j],c[m])<0) m = j;
        }
        char tmp[100];
        strcpy(tmp,c[i]);
        strcpy(c[i],c[m]);
        strcpy(c[m],tmp);
    }
}

int cmp(const void *a,const void *b) {
	char *x = (char *)a;
	char *y = (char *)b;
	
		return strcmp(x,y);
	
}
int main(){
    char c[1000],l[100][100];
    gets(c);
    char *token =strtok(c," ");
    int n = 0;
    while(token!=NULL){
        strcpy(l[n],token);
        n++;
        token = strtok(NULL," ");
    }
   
    qsort(l,n,sizeof(l[0]),cmp);
    for(int i = 0;i < n;i++){
        printf("%s ",l[i]);
    }
}