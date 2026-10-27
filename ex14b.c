#include <stdio.h>
int main(){
 int n,b[20],i;
printf("Indexed allocation");
 printf("Enter number of patient record blocks: ");
 scanf("%d",&n);
 printf("Enter block numbers: ");
 for(i=0;i<n;i++) scanf("%d",&b[i]);
 printf("Index block -> ");
 for(i=0;i<n;i++) printf("%d ",b[i]);
 printf("\nPatient records allocated using indexing.\n");
 return 0;
}
