#include<stdio.h>

struct employee{
	char name[20];
	int empage;
	int  empphonenumber;
	float salary;
};
int main()
{
	struct employee emp;
	
	
	printf("\nEnter details :\n");
	printf("Name ?:");                    gets(emp.name);
	printf("age ?:");                     scanf("%d",&emp.empage);
	printf("Phonenumber ?:");           scanf("%d",&emp.empphonenumber);
	printf("salary ?:");                  scanf("%f",&emp.salary);
	
	printf("\nEnter detailes  is :\n");
	printf("Name: %s"      ,emp.name);
	printf("Age: %d"       ,emp.empage);
	printf("phonenumber: %d"        ,emp.empphonenumber);
	printf("salary: %f\n"  ,emp.salary);
	return 0;
	
}
