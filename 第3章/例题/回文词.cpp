#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LOCAL 
const char* rev="A  3 HIL JM O  2TUVWXY51SE Z  8 ";
const char* msg[]={"not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome"};

#ifdef LOCAL
FILE *fin;
fin=fopen("Palindromes.in","rb");
#endif

//�Զ��庯�������� 
char r(char ch)
{
	if(isalpha(ch))
		return rev[ch-'A']; 
}

int main()
{
	char s[30];
	while(fscanf(fin,"%s",&s)==1)
	{
		int len=strlen(s);
		int p=1,m=1;//p=1�����ǻ��Ĵ���m=1�����Ǿ��� 
		for(int i=0;i<(len+1)/2;i++)
		{
			if(s[i]!=s[len-1-i])
				p=0;//���ǻ��Ĵ� 
			if(r(s[i])!=s[len-1-i]) 
				m=0;//���Ǿ��� 
		}
		printf("%s -- is %s.\n\n",s,msg[m*2+p]);	
	}
	fclose(fin);
	return 0;	
} 
