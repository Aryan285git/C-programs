#include <stdio.h>
struct Student{
	char ch[25]="Aryan";
	int age=12;
	int Rollno=13221;
	int marks=87;
};
int main(){
	struct Student s1;
	printf("%c",s1.ch);
	printf("%d",s1.age);
	printf("%d",s1.Rollno);
    printf("%d",s1.marks);

}