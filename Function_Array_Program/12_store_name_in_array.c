//WAP to accept 5 students name and store it in array

#include <stdio.h>
main() 
{
    char names[5][100];
	int i;
	
	printf("Enter names of 5 students :\n");
	printf("----------------------------\n");
    
    for(i=0;i<5;i++)
	{
        printf("\nStudent %d : ",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
    }
    printf("\n\nNames of 5 students are :\n");
    printf("----------------------------\n");

    for(i=0;i<5;i++)
	{
        printf("\nStudent %d : %s",i+1,names[i]);
    }
}
