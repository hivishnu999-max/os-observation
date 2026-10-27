#include <stdio.h>
int main(){
 int m[3]={1,2,3},p,i,hit=0;
 printf("Page replacement:\n");
printf("ATM Memory: 1 2 3\nEnter page: "); scanf("%d",&p);
 for(i=0;i<3;i++) if(m[i]==p) hit=1;
 if(hit) printf("Page Hit\n");
 else {m[0]=p; printf("Page Fault\n");}
 printf("Memory: ");
 for(i=0;i<3;i++) printf("%d ",m[i]);
 return 0;
}
