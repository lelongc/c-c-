#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int is_lower(char c){
    if(c >= 97 && c <= 122)return 1;
    return 0;
}
int is_upper(char c){
    if(c >= 'A' && c <= 'Z')return 1;
    return 0;
}
int is_alpha(char c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))return 1;
    else return 0;
}
int is_digit(char c){
    if(c >= '0'&& c <= '9')return 1;
    else return 0;
}
char to_lower(char c){
    if(c >= 'A' && c <= 'Z'){
        c+=32;
    }
    return c;
}
int str_len(char c[]){
    int cnt = 0;
    while(c[cnt]!='\0'){
        cnt++;
    }
    return cnt;
}
char *str_lwr(char c[]){// truyen vao mang thi tra ve con tro den ki tu dau tien 
    for(int i = 0;i < strlen(c);i++){
        c[i]=tolower(c[i]);
    }
    return c;
}
int str_cmp(char a[],char b[]){
    
    int n1 = strlen(a);
    int n2 = strlen(b);
    for(int i =0 ;i < (n1 < n2 ? n1 : n2);i++ ){
        if(a[i]!=b[i]){
            if(a[i]>b[i])return 1;
            else if(a[i]<b[i])return -1;
        }
    }// đi xún đây nghĩa là 2 xâu = nhau
    if(n1 == n2)return 0;
    else  if( n1 < n2)return -1;
    else return 1;
}
int str_cmpi(char a[],char b[]){//khong phan biet in hoa thg
    
    int n1 = strlen(a);
    int n2 = strlen(b);
    str_lwr(a);
    str_lwr(b);
    for(int i =0 ;i < (n1 < n2 ? n1 : n2);i++ ){
        if(a[i]!=b[i]){
            if(a[i]>b[i])return 1;
            else if(a[i]<b[i])return -1;
        }
    }// đi xún đây nghĩa là 2 xâu = nhau
    if(n1 == n2)return 0;
    else  if( n1 < n2)return -1;
    else return 1;
}
long long a_toll(char c[]){
    long long res = 0;
    for(int i = 0;i <strlen(c);i++){
        res = res*10+c[i]-'0';
    }
    return res;
}
char *str_rev(char c[]){
    char l = 0, r = strlen(c)-1;
    while(l < r){
        int  tmp = c[l];
        c[l] = c[r];
        c[r]=tmp;
        l++;r--;
    }
    return c;
}
int main(){
    char c[100] ="1234567789";
    char a[100] ="CONMEO";
    printf("%s ",str_rev(c));

 

    
}