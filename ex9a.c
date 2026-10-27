#include <stdio.h>
int main(){
 int n=4,i,j,p[4]={1,2,3,4},bt[4],pr[4],wt[4]={0},tat[4],t=0,x;
 printf("Priorty Scheduling:\n");
for(i=0;i<n;i++){printf("P%d BT Priority: ",p[i]);scanf("%d%d",&bt[i],&pr[i]);}
 for(i=0;i<3;i++)for(j=i+1;j<4;j++)if(pr[i]>pr[j]){
  x=pr[i];pr[i]=pr[j];pr[j]=x;x=bt[i];bt[i]=bt[j];bt[j]=x;x=p[i];p[i]=p[j];p[j]=x;}
 for(i=0;i<4;i++){wt[i]=t;t+=bt[i];tat[i]=t;}
 printf("\nP\tBT\tPR\tWT\tTAT\n");
 for(i=0;i<4;i++)printf("P%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],pr[i],wt[i],tat[i]);
}
