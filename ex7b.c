#include<stdio.h>
int main(){
int avail=2,max[]={2,1},alloc[]={1,1},need[2],i;
for(i=0;i<2;i++) need[i]=max[i]-alloc[i];
printf("Movie Ticket Cancellation\n");
for(i=0;i<2;i++) if(need[i]<=avail){avail+=alloc[i];printf("Customer %d: Safe\n",i+1);}
else printf("Customer %d: Wait\n",i+1);
printf("System remains in SAFE STATE");
}
