#include"iostream.h"
#include<stdio.h>
#include<conio.h>
#include<dos.h>

class EBill
{
       private:
	char name[100];
       protected:
	float acc;
       public:
	void input()
	{
	      delay(50);
	      cout<<"================================================================================";
	      cout<<"\nENTER YOUR NAME ::";
	      cin>>name;
	      delay(50);
	      cout<<"\nENTER YOUR ACCOUNT NUMBER ::";
	      cin>>acc;
	}
	void display()
	{
	     cout<<"================================================================================";
	     cout<<"\nYUOR NAME IS ::"<<name;
	     cout<<"\nYOUR ACCOUNT NUMBER IS ::"<<acc;
	}

     };

class poor: public EBill
{
       private:
	  float unit;
       public:
	void amountp()
	{

	  input();
	  cout<<"\nENTER THE AMOUNT OF ELECTRICITY(in UNITS) ::";
	  cin>>unit;
	}
	void displayp()
	{
	 clrscr();
	 display();
	 float k=(unit*4);
	 float l=(float)15/100 ;
	 float n=(float)k*l;
	 float h=(k-n);
	 cout<<"\nYOUR MONTHLY ELECTRICAL BILL IS (in INR) ::"<<h;
	}
	int searchp(int a)
	{
		if(a==acc)
		{
			displayp();
			return 1;
		}
		else return 0;
	}
};
class mid: public EBill
{
       private:
	  float unit;
       public:
	void amountm()
	{
	  input();
	  cout<<"\nENTER THE AMOUNT OF ELECTRICITY(in UNITS) ::";
	  cin>>unit;
	}
	void displaym()
	{
		display();
		float k=(unit*4);
		float l=(float)5/100 ;
		float n=(float)k*l;
		float h=(k-n);

		cout<<"\nYOUR MONTHLY ELECTRICAL BILL IS (in INR) ::"<<h;
	}
	 int searchm(float b)
	 {
		if(b==acc)
		{
			displaym();
			return 1;
		 }
		else
		 return 0;
	 }
};

class rich: public EBill
{
       private:
	  float unit;
       public:
	void amountr()
	{
	  input();
	  cout<<"\nENTER THE AMOUNT OF ELECTRICITY(in UNITS) ::";
	  cin>>unit;
	}
	void displayr()
	{
		display();
		float k=(unit*4);
		cout<<"\nYOUR MONTHLY ELECTRICAL BILL IS (in INR) ::"<<k;
	}
	int searchr(float c)
	{
		if(c==acc)
		{
			displayr();
			return 1;
		}
		 else
		return 0;
	 }
};


	void main()
	{
	textcolor(3);
	textbackground(0);
	highvideo();
	float ac;
	int i,n,j,k,l,a;
	poor p[20];
	mid m[20];
	rich r[20];
	clrscr();

	 while(1)
	{

	clrscr();
	delay(500);

	cout<<"--------------------------THE PROJECT OF ELECTRIC BILL--------------------------";
	cout<<"\n\n\n1)INPUT THE DETAILS :: \n2)DISPLAY THE DETAILS :: \n3)SEARCH BY ACCOUNT NO ::\n4)EXIT THE SYSTEM :: "<<endl<<endl;

	delay(1000);
	char c[10];
	cout<<"PERFORM THE OPERATION :: ";
	cin>>n;
	       switch(n)
	       {
			case 1:
			clrscr();
			cout<<"================================================================================";
			cout<<"\nHOW MANY INPUTS DO YOU WANT :: ? \n";
			cin>>j;

			for(i=0;i<j;i++)
			{
			cout<<endl;
			cout<<"================================================================================";
			cout<<"\n:P:------> FOR HOME \n:R:------> FOR HIGH\n:M:------> FOR COM \t";
			cin>>c[i];

			if(c[i]=='p' || c[i]=='P')
			p[i].amountp();

			if(c[i]=='m' || c[i]=='M')
			m[i].amountm();

			if(c[i]=='r' || c[i]=='R')
			r[i].amountr();
	     }
	      break;

			case 2:
			clrscr();
			for(i=0;i<j;i++)
			{

			if(c[i]=='p' || c[i]=='P')
			p[i].displayp();
			if(c[i]=='m' || c[i]=='M')
			m[i].displaym();
			if(c[i]=='r' || c[i]=='R')
			r[i].displayr();

			}
			getch();
	      break;

			case 3:
			cout<<"\n"<<endl;
			 cout<<"\nENTER ACCOUNT NUMBER  ::  ";
			 cin>>ac;
			 clrscr();
			 for(i=0;i<j;i++)
			 {
			  if(c[i]=='p' || c[i]=='P')
			  {
			  p[i].searchp(ac);
			  if(a==1)
			  break;
			  }
			  if(c[i]=='m' || c[i]=='M')
			  {
			    m[i].searchm(ac);
			    if(a==1)
			    break;
			  }
			 if(c[i]=='r' || c[i]=='R')
			 {
			 r[i].searchr(ac);
			if(a==1)
			break;
			}
		   }
		   getch();
	      break;

	      case 4:
			 cout<<"================================================================================";
			 cout<<"                              EXITING THE SYSTEM !\1";
			 break;

	      default:
	      cout<<"\nINVALID OPERATION PERFORMED \3\n";
	      break;
	       }
	   if(n==4)
	   break;
	}
	getch();
}