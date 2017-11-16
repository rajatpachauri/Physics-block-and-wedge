#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

int main()
{

	clrscr();
	int gd=DETECT;
	int gm;
	int sum=0;
	srand(time(NULL));
	int u1=rand()%20;//generate the number between 0 and 2
	float u=(u1/10)+0.1;
	int mass=rand()%10;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	outtextxy(200,200,"press any key to begin the experiment ");
	getch();
	cleardevice();
	printf("\n\n\n\t\tYou are given a block of mass = %dgm  and \n\t\t   u = %.2f and you have been provided\n\t\t    with 1 TO 100mg weights and \n\t\t    1-10gm weights\n\t\t\t",mass,u);
	setcolor(YELLOW);
	for(int i=0;i<9;i++)
	{
		char arr[10];
		sprintf(arr,"%dmg",i+1);
		outtextxy(50+i*45,200,arr);
		circle(57+i*45,200,20);
	}
	for(int j=0;j<9;j++)
	{
		char arr[10];
		sprintf(arr,"%dg",j+1);
		outtextxy(50+j*45,272,arr);
		circle(55+j*45,275,20);
	}
	setcolor(GREEN);
	getch();
	clrscr();
	int temp;
	int answer=(mass*9.8*u*4)/5;
	for(i=0;i<9;i++)
	{

		int points[8]={200,300,400,150,400,300,200,300};
		setfillstyle(CLOSE_DOT_FILL,BROWN);
		drawpoly(4,points);
		fillpoly(4,points);
		int point[10]={280,240,260,255,250,240,260,232,280,240};
		setfillstyle(LINE_FILL,1);
		drawpoly(5,point);
		fillpoly(5,point);
		line(270,236,410,132);
		circle(415,135,5);
		line(400,150,410,140);
		line(420,135,420,160);
		line(420,160,416,164);
		line(420,160,424,164);
		line(410,164,430,164);
		ellipse(420,164,180,360,10,5);
	}

	int choice=0;
	//printf("%d",answer);
	do
	{
	clrscr();
		for(i=0;i<9;i++)
		{

		int points[8]={200,300,400,150,400,300,200,300};
		setfillstyle(CLOSE_DOT_FILL,BROWN);
		drawpoly(4,points);
		fillpoly(4,points);
		int point[10]={280,240,260,255,250,240,260,232,280,240};
		setfillstyle(LINE_FILL,1);
		drawpoly(5,point);
		fillpoly(5,point);
		line(270,236,410,132);
		circle(415,135,5);
		line(400,150,410,140);
		line(420,135,420,160);
		line(420,160,416,164);
		line(420,160,424,164);
		line(410,164,430,164);
		ellipse(420,164,180,360,10,5);
		}
		printf("Enter the amount of weight you want to put on pan %d",answer);
		scanf("%d",&temp);
		sum+=temp;
		while(sum<=answer)
		{

			if(sum==answer)
			{
			clrscr();

				for(i=0;i<1000;i++)
				{
				outtextxy(150,100,"Your assumption is right ");
				int points[8]={200,300,400,150,400,300,200,300};
				setfillstyle(CLOSE_DOT_FILL,BROWN);
				drawpoly(4,points);
				fillpoly(4,points);
				int point[10]={280+(i/100)*4,240-(i/100)*3,260+(i/100)*4,255-(i/100)*3,250+(i/100)*4,240-(i/100)*3,260+(i/100)*4,232-(i/100)*3,280+(i/100)*4,240-(i/100)*3};
				setfillstyle(LINE_FILL,7);
				drawpoly(5,point);
				fillpoly(5,point);
				line(270+(i/100)*4,236-(i/100)*3,410,132);
				circle(415,135,5);
				line(400,150,410,140);
				line(420,135,420,160+(i/100)*5);
				line(420,160+(i/100)*5,416,164+(i/100)*5);
				line(420,160+(i/100)*5,424,164+(i/100)*5);
				line(410,164+(i/100)*5,430,164+(i/100)*5);
				ellipse(420,164+(i/100)*5,180,360,10,5);

				delay(20);
				clrscr();
				}
			getch();
			return 0;
			}
			else
			{
			int weight;
			printf("Put more weight on the pan ");
			scanf("%d",&weight);
			sum+=weight;
			}
		}
		if(sum>answer)
		{
		clrscr();
		for(i=0;i<9;i++)
		{

		int points[8]={200,300,400,150,400,300,200,300};
		setfillstyle(CLOSE_DOT_FILL,BROWN);
		drawpoly(4,points);
		fillpoly(4,points);
		int point[10]={280+120,240-90,260+120,255-90,250+120,240-90,260+120,232-90,280+120,240-90};
		setfillstyle(LINE_FILL,1);
		drawpoly(5,point);
		fillpoly(5,point);
		line(390,152,410,132);
		circle(415,135,5);
		line(400,150,410,140);
		line(420,135,420,160+125);
		line(420,160+125,416,164+125);
		line(420,160+125,424,164+125);
		line(410,164+125,430,164+125);
		ellipse(420,164+125,180,360,10,5);
		}

			outtextxy(120,150,"Your assumption is too high");
			sum=0;
		}
			int temp_2=0;
			getch();
			clrscr();
			printf("\n\n\n\n\n\n\n\t\tPRESS 1 CONTINUE ELSE PRESS ANY KEY TO EXIT  ");
			scanf("%d",&temp_2);
			if(temp_2==1)
				choice=1;


	} while(choice==1);

	getch();
	closegraph();
	return 0;
}