/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
main()
{
	int maths,physics,chemistry,total,total_m_p;
	
	printf("Enter obtained marks in maths : ");
	scanf("%d",&maths);
	printf("Enter obtained marks in physics : ");
	scanf("%d",&physics);
	printf("Enter obtainerd marks in chemistry : ");
	scanf("%d",&chemistry);
	
	printf("\nTotal marks in all three subjects : ");
	scanf("%d",&total);
	
	printf("\nTotal marks obtained in maths and physics : ");
	scanf("%d",&total_m_p);
	
	printf("\n\n");
	
	if(maths>=65 && physics>=55 && chemistry>=50 && total>=190)
		printf("-->The candidate is eligible for admission to a professional course.");
	else if(total_m_p>=140)
		printf("-->The candidate is eligible for admission to a professional course.");
	else
		printf("-->The candidate is not eligible for admission to a professional course.");
}
