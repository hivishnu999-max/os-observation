#include<stdio.h>
int main(){int f[3]={-1,-1,-1},t[3]={0},r[]={1,2,3,1,4,2,5},i,j,p,k=0,fault=0,m;
printf("LRU Page Replacement");
for(i=0;i<7;i++){p=r[i];for(j=0;j<3;j++)if(f[j]==p)break;
if(j==3){fault++;m=0;for(j=1;j<3;j++)if(t[j]<t[m])m=j;f[m]=p;}
for(j=0;j<3;j++)if(f[j]==p)t[j]=++k;
printf("Zone %d: ",p);for(j=0;j<3;j++)printf("%d ",f[j]);printf("\n");}
printf("Page Faults=%d\n",fault);return 0;}
