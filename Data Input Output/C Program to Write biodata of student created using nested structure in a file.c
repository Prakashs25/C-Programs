#include <stdio.h>
typedef struct
{
	int day;
	int month;
	int year;
} date;
typedef struct
{
	char name[30];
	char place[30];
	int age;
	date birthdate;
} biodata;
void main()
{
	FILE *fp;
	biodata student;
	int i;
	fp = fopen("st.dat", "w");
	printf("Enter name: ");
	scanf(" %30[^\n]%*c", student.name);
	printf("Enter place: ");
	scanf(" %30[^\n]%*c", student.place);
	printf("Enter age: ");
	scanf("%d", &student.age);
	printf("Enter birth date dd mm yy : ");
	scanf("%d", &student.birthdate.day);
	scanf("%d", &student.birthdate.month);
	scanf("%d", &student.birthdate.year);
	i = fprintf(fp, "Name :%s\nPlace: %s\nAge: %d \nDOB %d/%d/%d", student.name, student.place, student.age, student.birthdate.day, student.birthdate.month,
				student.birthdate.year);
	if (i != 0)
		printf("Data stored");
	else
		printf("failed");
	fclose(fp);
}