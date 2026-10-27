#include <stdio.h>
#include <string.h>
int main(){
char f[2][5][20],name[20]; int n[2]={0,0},s,ch,i;
do{
printf("\n-- COLLEGE FILE SYSTEM --\n1.Create File\n2.View Files\n3.Exit\nChoice: ");
scanf("%d",&ch);
if(ch==1){
printf("Enter student (1/2): "); scanf("%d",&s);
printf("Enter file name: "); scanf("%s",name);
strcpy(f[s-1][n[s-1]++],name); printf("File saved successfully.\n");
}
else if(ch==2){
printf("Enter student (1/2): "); scanf("%d",&s);
for(i=0;i<n[s-1];i++) printf("%s\n",f[s-1][i]);
}
}while(ch!=3);
return 0;
}
