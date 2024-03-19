#include<stdio.h>
#include<stdlib.h>
#define tab printf("\t\t\t")
char name[20],s_name[40],dob[20];
int st_number,class1,kn_marks,eng_marks,fr_marks,math_marks,sci_marks,so_marks;

void generate_marksheet()
{
	int grand_total;
	float percentage;
	grand_total=kn_marks+eng_marks+fr_marks+math_marks+sci_marks+so_marks;
    //percent=grand_total/600;
    percentage=(grand_total*100)/600;
    tab;printf("______________________________________________________________________\n");
    tab;printf("|         SCHOOL EXAMINATION REPORT                                   |\n");
    tab;printf("|_____________________________________________________________________|\n");
    tab; printf("| Your names: %s\tClass:P %dth\tStudent Number: %d \n",name,class1,st_number);
    tab; printf("| Date of birth: %s\n",dob);
    tab; printf("| School name: %s \n",s_name);
    tab;printf("|_____________________________________________________________________|\n");
    tab; printf("|\tSUBJECTS   \tMAX MARKS\tMIN MARKS\tGAINED MARKS  |\n");
    tab;printf("|_____________________________________________________________________|\n");
	tab; printf("|\t Kinyarwanda   \t 100      \t 50      \t  %d          |\n",kn_marks);
	tab; printf("|\t English       \t 100      \t 50      \t  %d          |\n",eng_marks);
	tab; printf("|\t Francais      \t 100      \t 50      \t  %d          |\n",fr_marks);
	tab; printf("|\t Mathematics   \t 100      \t 50      \t  %d          |\n",math_marks);
	tab; printf("|\t Science       \t 100      \t 50      \t  %d          |\n",sci_marks);
	tab; printf("|\t Social Studies\t 100      \t 50      \t  %d          |\n",so_marks);
	tab; printf("|_____________________________________________________________________|\n");
    tab; printf("|\t  Grand Total  \t 600  |Gained Marks\t %d out of 600       |\n",grand_total);
    tab; printf("|\t  Percentage   \t 100  |Gained Marks\t %.1f out of 100      |\n",percentage);
    tab; printf("|_____________________________________________________________________|\n");
    if(percentage>=95 && percentage<=100)
    {
    tab; printf("|Result: First Division                                               |\n");
    tab; printf("|Grade: A+\n");
    tab; printf("|Decision: Progress                                                   |\n");
	}
	else if(percentage>=90 && percentage<=94)
    {
    tab; printf("|Result: First Division                                               |\n");
    tab; printf("|Grade: A\n");
    tab; printf("|Decision: Progress                                                   |\n");
	}
	else if(percentage>=80 && percentage<=89)
	{
	tab; printf("|Result: Second Upper Division                                        |\n");
    tab; printf("|Grade: B\n");
    tab; printf("|Decision: Progress                                                   |\n");
	}
	else if(percentage>=60 && percentage<=79)
	{
	tab; printf("|Result: Second Division                                              |\n");
    tab; printf("|Grade: C\n");	
    tab; printf("|Decision: Progress                                                   |\n");
	}
	else if(percentage>=50 && percentage<=90)
	{
	tab; printf("|Result: Third Division                                               |\n");
    tab; printf("|Grade: D\n");
    tab; printf("|Decision: Progress                                                   |\n");
	}
	else if(percentage>=0 && percentage<=49)
	{
	tab; printf("|Result: Fail                                                         |\n");
    tab; printf("|Grade: F\n");	
    tab; printf("|Decision: Repeat                                                     |\n");	
	}
	else{
	   tab; printf("|Invalid Marks\n");		
	}
	tab;printf("|_____________________________________________________________________|\n");
}
void take_user_info()
{
	char yesNo;
	tab; printf("Enter your names: ");
	fflush(stdin);
	gets(name);
	tab; printf("Enter Date of birth: ");
	fflush(stdin);
	gets(dob);
	tab; printf("Enter School name: ");
	fflush(stdin);
	gets(s_name);
	tab; printf("Enter Class:P");
	scanf("%d",&class1);
	tab; printf("Enter Student Number: ");
	scanf("%d",&st_number);
	tab; printf("\n");
	tab; printf("Enter subjects marks: \n");
	tab; printf("\n");
    repeat:
	tab; printf("Kinyarwanda marks: ");
	scanf("%d",&kn_marks);
	if(kn_marks>100 || kn_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat;
	}
	repeat1:
	tab; printf("English marks: ");
	scanf("%d",&eng_marks);
	if(eng_marks>100 || eng_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat1;
	}
	repeat2:
	tab; printf("Francais marks: ");
	scanf("%d",&fr_marks);
	if(fr_marks>100 || fr_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat2;
	}
	repeat3:
	tab; printf("Mathematics marks: ");
	scanf("%d",&math_marks);
	if(math_marks>100 || math_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat3;
	}
	repeat4:
	tab; printf("Science marks: ");
	scanf("%d",&sci_marks);
	if(sci_marks>100 || sci_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat4;
	}
	repeat5:
	tab; printf("Social studies marks: ");
	scanf("%d",&so_marks);
	if(so_marks>100 || so_marks<1)
	{
	tab; printf("invalid marks enter valid marks\n");
	goto repeat5;
	}
    tab; printf("\n\tIf you want to generate your marksheet, press 'Y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c",&yesNo);
    if(yesNo=='y' || yesNo=='Y')
    {
    	generate_marksheet();
	}
    else
    {
    	exit(0);
	}
  }
int main()
{
	char yesNo;
	 int i,n;
    tab;printf("\n\t ****************** WELCOME TO MARKSHEET GENERATING SYSTEM****************** \n");
	tab;printf("\n\tGenerate your student marksheet by adding their information and marks in this system\n");
	tab;printf("\n\tIf you want to provide information then press 'Y' otherwise 'N': ");
	scanf("%c",&yesNo);
	if(yesNo=='y' || yesNo=='Y')
    {
    tab; printf("\n");
    tab;printf("Enter number of students (Class size):");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    tab;printf("\n");
    tab;printf("Student Report No: %d \n",i+1);
	tab;printf("Add a student: \n");
	tab;printf("-------------\n");	
	take_user_info();
	}
	}
	else
    {
    	exit(0);
	}
	system("PAUSE");
}

