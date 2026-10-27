#include <stdio.h>
int main(){
 int q[4]={1,2,3,4}, i,p;
 printf("ATM FIFO Queue: ");
 for(i=0;i<4;i++) printf("%d ",q[i]);
 printf("\nEnter new page: "); scanf("%d",&p);
 for(i=0;i<3;i++) q[i]=q[i+1];
 q[3]=p;
 printf("After FIFO: ");
 for(i=0;i<4;i++) printf("%d ",q[i]);
 return 0;
}
