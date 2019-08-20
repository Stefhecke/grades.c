#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STUDENTS 50


typedef struct{
	char name[50];
float grade[4];
	int active;

} Student;
Student students [MAX_STUDENTS];
void menu();
void registration();
void exclude();
void failed();
void search();
void list();

int main(int argc, char const *argv[])
{
	menu ();
		return 0;
}
void menu (){
int op;
do{
	system("cls"); //windows
	printf("\n1 - Register student\n2 - Exclude student\n3 - Students that failed\n4 - Search Student\n5 - List Students\n0 - To exit\n");
		scanf("%d", &op);
		getchar();
		getchar();
		switch(op){
			case 1:
			registration();
			break;
			case 2:
			exclude();
			break;
			case 4:
				search();
				break;
			case 5:
			list();
			break;
			}		
			getchar();
			getchar();

} while(op!=0);


}
void registration(){
	
	char name[50];
	float grade[4];
	int op;
	do{
		system("cls"); //windows
		printf("\nName: ");
		fgets(name, sizeof(name), stdin);
		printf("\n1 Bimester: ");
		scanf("%f", &grade[0]);
		printf("\n2 Bimester: ");
		scanf("%f", &grade[1]);
		printf("\n3 Bimester: ");
		scanf("%f", &grade[2]);
		printf("\n4 Bimester: ");
		scanf("%f", &grade[3]);
				for (int i = 0; i < MAX_STUDENTS; ++i)
		{
			if (students[i].active==0)
			{
				students[i].grade[0] = grade [0];
				students[i].grade[1] = grade [1];
				students[i].grade[2] = grade [2];
				students[i].grade[3] = grade [3];
				strcpy(students[i].name, name);
				students[i].active=1;
				break;
				
			}
		}

    printf("\n1 - To Continue\n0- To Exit\n");
    scanf("%d", &op);
	}while (op!=0);


}
void exclude(){
 int enrollment;
 list();
 prinf("\n type the student id to be excluded: ");
 scanf("%d", &enrollment);
 --enrollment;
 students[enrollment].active=0;
 printf("\n Student was excluded\n ");
 getchar ();
 getchar ();
 
}
void failed(){

}
void search(){
	system("cls"); //windows
	char name [50];
	printf ("\ntype student's name to search");
	fgets(name,sizeof(name), stdin);
	for (int i = 0; i <MAX_STUDENTS; ++i)
{
	if (strstr(students[i].name, name)!=NULL)
	{
		printf("enrollment: %d\n", i+1);
		printf("Name: %s\n", students[i].name);
		printf("1 Bim: %0.2f\n", students[i].grade[0]);
		printf("1 Bim: %0.2f\n", students[i].grade[1]);
		printf("1 Bim: %0.2f\n", students[i].grade[2]);
		printf("1 Bim: %0.2f\n", students[i].grade[3]);
		printf("\n-----------------\n");
	}
		}		
	

}
void list(){
	system("cls"); //windows
	printf("\n STUDENT LIST");
	for (int i = 0; i < MAX_STUDENTS; ++i)
	{
		if (students[i].active==1)
		{
		
		printf("enrollment: %d\n", i+1);
		printf("Name: %s\n", students[i].name);
		printf("1 Bim: %0.2f\n", students[i].grade[0]);
		printf("1 Bim: %0.2f\n", students[i].grade[1]);
		printf("1 Bim: %0.2f\n", students[i].grade[2]);
		printf("1 Bim: %0.2f\n", students[i].grade[3]);
		printf("\n-----------------\n");
	}
	}

		
}
