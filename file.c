#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	FILE *ptr;
       ptr =fopen("abc.txt","w");
     // int fputs( *str,*ptr);
	scanf("%[^\n]",str);
      fprintf(ptr,"%s",str);
      fclose(ptr);
      fopen("abc.txt","a");
      for(int i=0;i!=strlen(str);i++)
      {
	      if(islower(str[i]))
	      {
		      str[i]=toupper(str[i]);
	      }
	      else if(isupper(str[i]))
		      str[i]=tolower(str[i]);
	      else if(isspace(str[i]))
		      str[i]= str[i];
      }
            fprintf(ptr,"%s",str);
      printf("%s\n",str);
	fclose(ptr);
	

}
