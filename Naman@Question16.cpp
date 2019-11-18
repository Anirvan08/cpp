// MADE BY-  NAMAN JAIN
#include<iostream>
#include<string.h>
# define max 100
using namespace std;
int main()
{
	char str1[max],str2[max],temp;
	int ch,l1=0,l2=0,i,j,p;
	start:
	cout<<"\t\tMENU\t\t\n";
	cout<<"1. Show address of each character\n";
	cout<<"2. Concatenate two Strings without using strcat function\n";
	cout<<"3. Concatenate two Strings using strcat funcion\n";
	cout<<"4. Compare two Strings\n";
	cout<<"5. Calculate length of string (using pointer)\n";
	cout<<"6. Convert all lowercase characters to uppercase\n";
	cout<<"7. Convert all upppercase characters to lowercase\n";
	cout<<"8. Calculate number of vowels\n";
	cout<<"9. Reverse the string\n";
	cout<<"Enter your Choice\n";
	cin>>ch;
	if(ch==1)
	   {
		 cout<<"Enter a string\n";
		cin.getline(str1,max);
		l1=strlen(str1);
		cout<<"Address of each character of string is : \n";
		for(i=0;i<l1;i++)
		{
		cout<<str1[i]<<" = "<<(void*)str1[i]<<endl;
	}
}		else if(ch==2)
		{
		cout<<"Enter first string\n";
		cin.getline(str1,max);
		l1=strlen(str1); 
		cout<<"Enter second string\n";
		cin.getline(str2,max);
		l2=strlen(str2);
		i=l1;
		for(j=0;j<l2;++j,++i)
		str1[i]=str2[j];
		str1[i]='\0';
		cout<<"String After Concatenation is : "<<str1;
	}
	else if(ch==3)
	{
		cout<<"Enter first string\n";
		cin.getline(str1,max);
		l1=strlen(str1); 
		cout<<"Enter second string\n";
		cin.getline(str2,max);
		l2=strlen(str2);
		strcat(str1,str2);
	cout<<"String After Concatenation is : "<<str1;
	}
	else if(ch==4)
	{
		cout<<"Enter first string\n";
		cin.getline(str1,max);
		cout<<"Enter second string\n";
		cin.getline(str2,max);
		if(!strcmp(str1,str2))
		cout<<"Both strings are equal\n";
		else 
		cout<<"Strings are Unequal\n";
	}
	else if(ch==5)
	{
	
		cout<<"Enter a string\n";
		cin.getline(str1,max);
			char *ptr=str1;
			while(*(ptr++)!='\0')
			l1++;
			cout<<"Length of the String is : "<<l1;
	}
	else if(ch==6)
	{
		cout<<"Enter a string\n";
		cin.getline(str1,max);
		l1=strlen(str1);
		for(i=0;i<l1;i++)
		{
		if(str1[i]>='a'&&str1[i]<='z')
		str1[i]-=32; }
		cout<<"New string after Conversion is : "<<str1;
	}
	else if(ch==7)
	{
		cout<<"Enter a string\n";
		cin.getline(str1,max);
		l1=strlen(str1);
		for(i=0;i<l1;i++)
		{
		if(str1[i]>='A'&&str1[i]<='Z')
		str1[i]+=32; }
		cout<<"New string after Conversion is : "<<str1;
	}
	else if(ch==8)
	{
		cout<<"Enter a string\n";
		cin.getline(str1,max);
		j=strlen(str1)-1;
		for(i=0;i<j;i++,j--)
		{
			temp=str1[i];
			str1[i]=str1[j];
			str1[j]=temp;
		}
		cout<<"Reversed string is : "<<str1;
	}
	else
	cout<<"Wrong choice!!!!\n";
	cout<<"Do you want to enter again(y/n)\n";
	cin>>p;
	if(p=='y')
	goto start;
}
