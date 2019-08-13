#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#if 0
string ReplaceBlank(string s)
{
	int n=s.size();
	string str="";
	for(int i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
		   str+="%20";
		}
		else
		{
		   str+=s[i];
		}
	}
	return str; 
}
int main()
{
	string s="abc defgx yz";
	string str=ReplaceBlank(s);
	cout<<str<<endl;
	system("pause");
	return 0;
}
#endif

void ReplaceBlank(char s[])
{
   int len=strlen(s);
   int count=0;
   if(len<0||s==NULL)
	   return;
   for(int i=0;i<len;i++)
   {
	   if(s[i]=' ')
	   {
	      count++;
	   }
   }
   int p1=len;
   int p2=2*count+len;
   while(p1!=p2&&p1>=0)
   {
     if(s[p1]==' ')
	 {
	    s[p2--]='0';
		s[p2--]='2';
	    s[p2--]='%';
		p1--;
	 }
	 else
	 {
	    s[p2--]=s[p1--];
	 }
   }
   printf("%s",s);
}
int main()
{
	string s="abc defgx yz";
	char *p=(char*)s.c_str();
	ReplaceBlank(p);
	system("pause");
	return 0;
}