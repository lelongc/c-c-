#include <bits/stdc++.h> 
#include <algorithm>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std; 
struct sinhvien{
    
    char ten[20];
    int gpa;
    
};
typedef struct sinhvien sv;
sv nhap(){
    sv x;
    gets(x.ten);
    scanf("%d",&x.gpa);
    return x;
}
void nhap1(sv *x){
    getchar();
    gets(x->ten);
    scanf("%d",&x->gpa);
}
void in(sv a){
    printf("%s %d\n",a.ten,a.gpa);
}
int main(){
    // sv a; //= nhap();
    // nhap1(&a);
    
    // in(a);
    int n;scanf("%d",&n);
    sv a[n];
    for(int i = 0 ; i< n ;i++)nhap1(&a[i]);
    for(int i =0 ; i< n ; i++)in(a[i]);

    


}