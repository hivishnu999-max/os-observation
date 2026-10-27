#include <stdio.h>
#include <string.h>
int main(){
char f[10][30],name[30]; int n=0,ch,i,found;
do{
printf("\n-- COLLEGE FILE SYSTEM --\n1.Create File\n2.View Files\n3.Exit\nChoice: ");
scanf("%d",&ch);
if(ch==1){
printf("Enter file name: "); scanf("%s",name); found=0;
for(i=0;i<n;i++) if(strcmp(f[i],name)==0) found=1;
if(found) printf("File already exists!\n");
else {strcpy(f[n++],name); printf("File saved successfully.\n");}
}
else if(ch==2){for(i=0;i<n;i++) printf("%s\n",f[i]);}
}while(ch!=3);
return 0;
}
