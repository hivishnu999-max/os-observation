#include <stdio.h>
#include <stdlib.h>
int main(){
printf("DISK SCHEDULING:");
 int n,h,r[20],v[20]={0},t=0,i,k,m,p;
 scanf("%d",&n);
 for(i=0;i<n;i++) scanf("%d",&r[i]);
 scanf("%d",&h); printf("%d",h);
 for(k=0;k<n;k++){m=9999;
  for(i=0;i<n;i++) if(!v[i]&&abs(r[i]-h)<m)m=abs(r[i]-h),p=i;
  v[p]=1;t+=m;h=r[p];printf(" -> %d",h);}
 printf("\nTotal Head Movement = %d\n",t);
}
