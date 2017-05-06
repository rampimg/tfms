#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
	int x1,y1,x2,y2;
	int y=y1;
	int iy;
	int gdriver=DETECT,gmode,errorcode;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		cout<<"graphics error %s\n"<<grapherrormsg(errorcode);
		getch();
		exit(1);
	}
	cout<<"enter the value of x1,y1 and x2,y2"<<endl;;
	cin>>x1>>y1>>x2>>y2;
	double m=double (y2-y1)/(x2-x1);
	for(int x=x1;x<=x2;x++)
	{
	iy=ceil(y);
	putpixel(x,iy,RED);
	y=y+m;
	delay(50);
	}
	getch();
	closegraph();
	return 0;
 }

