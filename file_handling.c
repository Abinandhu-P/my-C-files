#include<stdio.h>
void copyfile(int start, int end, FILE *fil1,FILE *fil2)
{
printf("Inside the copy function");
char arr[500];
 int line =1;
  while(fgets(arr,sizeof(arr),fil1)!=NULL)
  {
  //printf("Inside the while loop");
  if(line>=start && line<=end){
  //printf("The content is copying....");
  printf("%s",arr);
  fputs(arr,fil2);
  }
  line++;
  }
  
}
int main(){
 
 FILE *fp;
fp= fopen("content1.txt","r");
FILE *fp1= fopen("content2.txt","r");
FILE *fp2= fopen("copied.txt","a");
int start,end;
scanf("%d %d",&start,&end);
if(start<0|| start>100 || end >100 ||end<0)
printf("error in input");
printf("going to copy\n");
copyfile(start,end,fp,fp2);
printf("Copied\n");
fclose(fp);
int start1,end1;
scanf("%d %d",&start1,&end1);
if(start1<0|| start1>100 || end1 >100 ||end1<0)
printf("error in input");
copyfile(start1,end1,fp1,fp2);
 fclose(fp1);
 printf("%s",fp2);
 fclose(fp2);
}
