#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int MAX=50;

class veg
{
public :
      char V[MAX];
      int Vpcount;
      void accept1(char S[MAX],int P)
      { strcpy(V,S);
      Vpcount=P;
      }

      void display1()
      { cout<<"\n"<<V<<"\t\t"<<Vpcount ;
      }
};


class fruits
{
public :
      char F[MAX];
      int Fpcount;
      void accept2(char S[MAX],int P)
      { strcpy(F,S);
      Fpcount=P;
      }

      void display2()
      { cout<<"\n"<<F<<"\t\t"<<Fpcount ;
      }
};


void sort(veg *Vobj[MAX],fruits *Fobj[MAX],int m, int n )
{
     char *S1,*S2;
     int i,j,temp1,temp2;
	for(i=0;i<m-1;i++)
	 {
	   for(j=0;j<m-1-i;j++)
	    {
	     if(Vobj[j]->Vpcount<Vobj[j+1]->Vpcount )
	     {
	      temp1=Vobj[j]->Vpcount;
	      Vobj[j]->Vpcount=Vobj[j+1]->Vpcount;
	      Vobj[j+1]->Vpcount=temp1;
	      strcpy(S1,Vobj[j]->V) ;
	      strcpy(Vobj[j]->V,Vobj[j+1]->V);
	      strcpy(Vobj[j]->V,S1);
	     }
	    }
	 }
cout<<"====================================================";
	cout<<"\n \tVEGTABLE"<<"\t"<<"\tQUANTITY\n";
cout<<"====================================================";
	for(i=0;i<m;i++)
		{ cout<<"\n\t"<<Vobj[i] ->V<<"\t\t"<<Vobj[i]->Vpcount<<"\n";}



	for(i=0;i<n-1;i++)
		 {
		   for(j=0;j<n-1-i;j++)
		    {
		     if(Fobj[j]->Fpcount<Fobj[j+1]->Fpcount )
		     {
	      temp2=Fobj[j]->Fpcount;
	      Fobj[j]->Fpcount=Fobj[j+1]->Fpcount;
	      Fobj[j+1]->Fpcount=temp2;
	      strcpy(S2,Fobj[j]->F) ;
	      strcpy(Fobj[j]->F,Fobj[j+1]->F);
	      strcpy(Fobj[j]->F,S2);
	      }
	     }
	    }
cout<<"========================================================";
     cout<<"\n\n\t FRUTIS"<<"\t"<<"\tQUANTITY\n";
cout<<"=========================================================";
	for(i=0;i<n;i++)
	{ cout<<"\n\t"<<Fobj[i]->F<<"\t\t"<<Fobj[i]->Fpcount;}
}



int main()
{
int ch;

veg *vobj[MAX];
char vname[MAX];
int vcount;

fruits *fobj[MAX];
char fname[MAX];
int fcount;


int m,n;
while(1)
{
cout<<"\n==========================================================\n";
cout<<"\t\tWELCOME TO FRUITS AND VEGTABLE MALL\n";
cout<<"\n==========================================================\n";
cout<<"\n\n\t\t!!!!!!!!  Enter your choice !!!!!!!!!\n";
cout<<"\n\t\t-> 1 For Accept Vegtable data\n";
cout<<"\n\t\t-> 2 For Accept Fruits   data \n";
cout<<"\n\t\t-> 3 For Display Sorted  data\n";
cout<<"\n\t\t-> 4 For exit\t";

cin>>ch;
switch(ch)
{
case 1 :
	   cout<<"\nEnter No. Of Items For Vegetable U Want To Enter \t";
	   cin>>m;
	   for(int i=0;i<m;i++)
	   {
		    cout<<"\n Enter name of vegetable :- "<<i+1<<"\t";
		    cin>>vname;
		    cout<<"\n Enter quantity of vegetable :- :"<<i+1<<"\t";
		    cin>>vcount;
		    vobj[i]=new veg;
		    vobj[i]->accept1(vname,vcount);
	   }
	   cout<<"\n You Have Entered\n";
		for(int x=0;x<m;x++)
		{
			 vobj[x]->display1();
		}
		break;

case 2 : cout<<"\n Enter No. Of Items For Fruits U Want To Enter\t";
cin>>n;
for(int j=0;j<n;j++)
{
		 cout<<"\n Enter name of Fruit :-"<<j+1<<"\t";
		 cin>>fname;
		 cout<<"\n Enter quantity of Fruit :-"<<j+1<<"\t";
		 cin>>fcount;
		 fobj[j]=new fruits;
		 fobj[j]->accept2(fname,fcount);
	 }
		  cout<<"\n You Have Entered\n";
		for(int y=0;y<n;y++)
		{
			 fobj[y]->display2();
		}
	  break;
case 3 : sort(vobj,fobj,m,n );

	break;

case 4 : exit(0);
}
}

return 0;
}

