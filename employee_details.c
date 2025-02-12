#include<stdio.h>
#include<stdlib.h>
//#include<regex.h>
struct employee{
 int emp_id;
 char emp_name[100];
 int days;
 int sal;
 //int month;
 
};

struct employee_atten{
 int emp_id;

 int pre_days;

 
};
/*int match_regex(const char *pattern,const char *input){
   // printf("The regex function is called\n");
    regex_t regex;
    int result;
    result=regcomp(&regex,pattern,REG_EXTENDED);
    result=regexec(&regex,input,0,NULL,0);
    regfree(&regex);
   return !result;
 
}*/

int main()
{
while(1){
 FILE *fp;
 fp = fopen("\nemployee_details.txt","w");
 struct employee emp1;
 printf("Enter the employees details of Id,Name, total days of work , sal of him,month in numbers \n");
 scanf("%d %[^\n] %d %d",&emp1.emp_id,&emp1.emp_name,&emp1.days,&emp1.sal);
 /*if(!match_regex("^[0-9]+$", emp1.emp_id)){
       printf("Provide valid input");
       exit(1);
    }*/
 if(emp1.emp_id<100|| emp1.emp_id>200)
 {
 printf("Error in input of id\n");
  printf("Invalid id enter between 101 - 199\n");
 exit(1);
 }
 else if(emp1.days<0 || emp1.days>31)
 {
  printf("Error in input of days");
  exit(1);
 }
 else{
 fprintf(fp,"emp id =%d\n emp name =%s\n emp total working days=%d\n employee total sal = %d\n",emp1.emp_id,emp1.emp_name,emp1.days,emp1.sal);
 printf("emp id =%d\n emp name =%s\n emp total working days=%d\n employee total sal = %d\n",emp1.emp_id,emp1.emp_name,emp1.days,emp1.sal);
 fclose(fp);
 }
 FILE *fp1;
 fp1 = fopen("employee_atten.txt","w");
 struct employee_atten sal;
 printf("Enter the employees details of Id, total days of work  \n");
 scanf("%d %d",&sal.emp_id,&sal.pre_days);
 if(sal.emp_id<100|| sal.emp_id>200)
 {
 printf("Error in input of id\n");
  printf("Invalid id enter between 101 - 199\n");
 exit(1);
 }

else if(sal.pre_days<0 || sal.pre_days>31)
 {
  printf("Error in input of days");
  exit(1);
 }
  else {
 fprintf(fp,"emp id =%d\n emp_worked days = %d\n",sal.emp_id,sal.pre_days);
 printf("emp id =%d\n emp_worked days = %d\n",sal.emp_id,sal.pre_days);
 fclose(fp1);}
 FILE *fp2;
 fp2= fopen("payslip.txt","w");
 if(emp1.emp_id==sal.emp_id )
 {
  if(sal.pre_days<emp1.days || emp1.days>31)
  {
 
float net_salary = ((float)emp1.sal/emp1.days);
int salary= net_salary * sal.pre_days;
int ded_sal= emp1.sal - salary;
fprintf(fp2,"employee id =%d\n emp name =%s\n emp total working days=%d\n employee total sal = %d\n absent days=%d\n deducted salary = %d\n net_salary=%d",emp1.emp_id,emp1.emp_name,emp1.days,emp1.sal,(emp1.days-sal.pre_days),ded_sal,salary);
printf("employee id =%d\n emp name =%s\n emp total working days=%d\n employee total sal = %d\n absent days=%d\n deducted salary = %d\n net_salary=%d\n",emp1.emp_id,emp1.emp_name,emp1.days,emp1.sal,(emp1.days-sal.pre_days),ded_sal,salary);
fclose(fp2);
 }
else 
printf("Wrong input of present days or entered days\n");
 }
 

}
}
