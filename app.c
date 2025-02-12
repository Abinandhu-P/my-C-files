#include<stdio.h>

int main() {
    char name[100], age[10], course[100], college[100], hobby[100], DOB[100];
    float cgpa;
    
    fgets(name, 100, stdin);
    fgets(age, 10, stdin);
    fgets(course, 100, stdin);
    fgets(college, 100, stdin);
    fgets(hobby, 100, stdin);
    fgets(DOB, 100, stdin);
    scanf("%f", &cgpa);
    printf("name: %s", name);
    printf("age: %s", age);
    printf("course: %s", course);
    printf("college : %s",college);
    printf("hobby :%s",hobby);
    printf("dob : %s", DOB);
    printf("CGPA : %.2f",cgpa);

    
    return 0;
}

