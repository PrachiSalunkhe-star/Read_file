//Write a program to read file character by character. Count Uppercase letters, Lowercase letters, digits and special characters in file. Print all results on console.

#include<stdio.h>

int main(void)
{
	int uppercount=0;
	int lowercount=0;
	int digitcount=0;
	int specialcount=0;
	




	char str[100]="// Memory Dynamically For 2 D Array.";

	
	FILE *fp=fopen("character.txt","w");
	
	for(int i=0;str[i]!='\0';i++)
	{
	   fputc(str[i],fp);
	}
	fclose(fp);


	char ch;

	FILE *fr = fopen("character.txt", "r");


	while((ch = fgetc(fr)) != EOF)
	{	
		if (ch>='a'&&ch<='z')
		{  lowercount++; }
		else if(ch>='A' && ch<='Z')
			{ uppercount++ ;}
		      else if(ch>='0' && ch<='9')
			{ digitcount++ ;}
			else
			  {specialcount++;}
		
		
	}

	printf("Upper case letters:%d\n lower case letters:%d\n digit:%d\n special character:%d\n",uppercount,lowercount,digitcount,specialcount);

		fclose(fr);


	return 0;
}