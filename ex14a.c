#include <stdio.h>
int main(){
 int start,n,i;
printf("Sequential allocation"); 
printf("Enter start block and number of blocks: ");
 scanf("%d%d",&start,&n);
 printf("CCTV video blocks: ");
 for(i=0;i<n;i++) printf("%d ",start+i);
 printf("\nSequential allocation successful.\n");
 return 0;
}
