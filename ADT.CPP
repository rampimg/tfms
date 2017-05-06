#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
class a
{
	     int ar[size];
	     int n;
	     public:
	     a()
	      {
		n=0;
	       }
	     void insert(int p,int v)
	      {
		 if(n > size)
		       {
			   cout <<"array is full";
		       }
		 else
		 {
		 for (int i=n;i>p;i--)
		 ar[i]=ar[i-1];
		 ar[i]=v;
		 n--;
		 }
	       }
	     void del(int p)
	       {
		  if(n<0)
		   {
			 cout <<"there is no element to delete";
			 return;
		    }
		  else
		    for(int i=p;i<n;i++)
		    ar[i]=ar[i+1];
		    n--;
		    cout <<"deleted" <<endl;
		}
	     void display()
	       {
		   if(n<0)
		    {
			    cout <<" there is no element to display";
		    }
		   else
		   {
		   for(int k=0;k<n;k++)
		   {
			   cout<<ar[k]<<endl;
		   }
		   }
		}
};

void main()
{
     int choice,p,v;
     a a1;
     while(1)
	{
	     cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice";
	     cin >> choice;
	     switch(choice)
	      {
	       case 1:  cout <<"enter the position & element";
			cin >>p>>v;
			a1.insert(p,v);
			break;
	       case 2:  cout<<"enter the position"<<endl;
			cin>>p;
			a1.del(p);
			break;
	       case 3:  a1.display();
			break;
	       case 4:  exit(1);
	       dafault: cout<<"wrong choice"<<endl;
	       }
	 }
	 getch();
}