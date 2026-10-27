#include <stdio.h>
int main(){
 int f[3]={-1,-1,-1},r=0,p,i,j,hit, faults=0;
printf("FIFO + Page Replacement\n");
 printf("Enter 5 ATM pages: ");
 for(j=0;j<5;j++){scanf("%d",&p); hit=0;
  for(i=0;i<3;i++) if(f[i]==p) hit=1;
  if(!hit){f[r]=p;r=(r+1)%3;faults++;}
  printf("Memory: %d %d %d\n",f[0],f[1],f[2]);
 }
 printf("Page Faults=%d",faults); return 0;
}
