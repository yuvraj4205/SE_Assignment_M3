//WAP to show difference between Structure and Union.

#include<stdio.h>

struct student //struct=union
			   //union will show inappropriate output in Rollno and Name
{
	int rollno;
	char name[20];
	int sub[5];
	float per;
	char grade;
}S[3];

main()
{
	int i,total=0,st;
	
	for(st=0;st<3;st++)
	{
		printf("\n-------Input Details for Student [%d]-------",st+1);
		printf("\n\nEnter Rollno : ");
		scanf("%d",&S[st].rollno);
	
		printf("\nEnter Student's Name : ");
		scanf("%s",&S[st].name);
		total=0;
		for(i=0;i<5;i++)
		{
			printf("\nEnter Marks for Subject [%d] : ",i+1);
			scanf("%d",&S[st].sub[i]);
			total=total+S[st].sub[i];
		}
		S[st].per=total/5;
	}	
	
	for(st=0;st<3;st++)
	{
		printf("\n\n-------Details for Student [%d]-------",st+1);
		printf("\nRollno : %d",S[st].rollno);
		printf("\nName : %s",S[st].name);
		for(i=0;i<5;i++)
		{
		printf("\nMarks for Subject [%d] : %d",i+1,S[st].sub[i]);
		}
		printf("\nPercentages : %.2f",S[st].per);
	}
}
