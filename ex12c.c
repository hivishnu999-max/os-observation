#include <stdio.h>
int main(){
 int b[]={100,500,200,300,600},p[]={212,417,112,426};
 int x[5],y[5],i,j,k,w;
 for(i=0;i<5;i++) x[i]=y[i]=b[i];
 printf("BEST FIT\n");
 for(i=0;i<4;i++){ k=-1;
  for(j=0;j<5;j++) if(x[j]>=p[i]&&(k<0||x[j]<x[k])) k=j;
  if(k>=0){printf("M%d->B%d\n",i+1,k+1);x[k]-=p[i];}
 }
 printf("WORST FIT\n");
 for(i=0;i<4;i++){ w=-1;
  for(j=0;j<5;j++) if(y[j]>=p[i]&&(w<0||y[j]>y[w])) w=j;
  if(w>=0){printf("M%d->B%d\n",i+1,w+1);y[w]-=p[i];}
  else printf("M%d->Not Allocated\n",i+1);
 }
}
