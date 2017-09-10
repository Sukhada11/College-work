#include<stdio.h>
#include<conio.h>
#include<string.h>
int search(char* p[],char* target){
	int t;
	for(t=0;p[t];t++){
		if(!strcmp(p[t],target)){
		
printf("%d",t);
		return t;}
	}
	return -1;
}
void main(){
	char *a[]={"bill","george","emma","ben","hannah","margret",NULL};
	//char *name;
//	gets(name);
	if(search(a,"ben")==-1)
	printf("Not in the list");
	else
	printf("Is in the list");
	
	
}
