#include<stdio.h>
#include<conio.h>
#include<string.h>
void toUp(char *s)
{
	int i;
for( i=0;s[i];i++){
	s[i]=toupper(s[i]);
	
}

}
void main()
{
char x[10];
gets(x);
toUp(x);
printf("%s",x);	
	
	
}
