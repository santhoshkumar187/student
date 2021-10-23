#include<stdio.h>
void main()
{
	int pnum , option , arr , cgp1,cgp2,cgp3,cgpa;
	char name[] , roll[] , pemail[] , eemail[] ;
	printf("Student name:");
	scanf("%s",name);
	printf("Rollno:");
	scanf("%s",roll);
	printf("Mobile number:");
	scanf("%d",&pnum);
	printf("Persnal mailid:");
	scanf("%s",&pemail);
	printf("edu mailid:");
	scanf("%s",eemail);
	printf("days scholar/hosteller:");
	scanf("%d",&option);
	printf("number of arrears:");
	scanf("%d",&arr);
	printf("GPA 1st sem:");
	scanf("%d",&cgp1);
	 printf("GPA 2nd sem:");
        scanf("%d",&cgp2);
	 printf("GPA 3rd sem");
        scanf("%d",&cgp3);
	 printf("CGPA upto 3rd sem :");
        scanf("%d",&cgpa);
}
