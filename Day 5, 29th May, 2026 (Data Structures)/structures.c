#include <stdio.h>
struct Student {

        int rollNumber;
        char name[50];
        int age;
        float grade;
    };
int main(){
    
struct Student student1;
student1.rollNumber = 100;
student1.age = 20;
student1.grade = 85.5;
struct Student *ptr = &student1;

printf("+-------------------------+\n");
printf("|    Student 1 Details    |\n");

}
