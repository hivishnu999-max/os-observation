#include<stdio.h>
int main(){int f[3]={-1,-1,-1},c[3]={0},r[]={1,2,3,1,4,2,5},i,j,p,pos,min,fault=0;
printf("LFU Page Replacement\n");
for(i=0;i<7;i++){p=r[i];for(j=0;j<3;j++)if(f[j]==p)break;
if(j<3)c[j]++;else{fault++;pos=0;for(j=0;j<3;j++)if(f[j]==-1){pos=j;break;}
if(f[pos]!=-1){min=c[0];pos=0;for(j=1;j<3;j++)if(c[j]<min)min=c[j],pos=j;}f[pos]=p;c[pos]=1;}
printf("Zone %d: ",p);for(j=0;j<3;j++)printf("%d ",f[j]);printf("\n");}
printf("Page Faults=%d\n",fault);return 0;}
