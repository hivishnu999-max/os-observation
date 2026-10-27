#include <stdio.h>
int main(){
 int n,i,j,t,bt[20],p[20],wt[20]={0},tat[20]; float aw=0,at=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){ scanf("%d",&bt[i]); p[i]=i+1; }
 for(i=0;i<n-1;i++) for(j=i+1;j<n;j++) if(bt[i]>bt[j]){
   t=bt[i];bt[i]=bt[j];bt[j]=t; t=p[i];p[i]=p[j];p[j]=t;
 }
 for(i=1;i<n;i++) wt[i]=wt[i-1]+bt[i-1];
 for(i=0;i<n;i++){tat[i]=wt[i]+bt[i];aw+=wt[i];at+=tat[i];printf("P%d BT=%d WT=%d TAT=%d\n",p[i],bt[i],wt[i],tat[i]);}
 printf("Avg WT=%.2f Avg TAT=%.2f\n",aw/n,at/n);
}

//sample input like 1 6 2 6 2
