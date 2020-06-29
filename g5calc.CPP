void calculator :: fill()
{
for(int x=11;x<71;x++)
	{
	for(int y=13;y<18;y++)
		{
		gtype("\261",6,x,y);
		}
	}
gtype("  +  ",15,16,14);
gtype("  -  ",15,25,14);
gtype("  *  ",15,34,14);
gtype("  \366  ",15,43,14);
gtype("  ^  ",15,52,14);
gtype("   %   ",15,61,14);
gtype(" sin ",15,16,16);
gtype(" cos ",15,25,16);
gtype(" tan ",15,34,16);
gtype(" cot ",15,43,16);
gtype(" sec ",15,52,16);
gtype(" cosec ",15,61,16);
}

void calculator :: fill1()
{
gtype("  AC  ",15,15,14);
gtype("  REUSE  ",15,37,14);
gtype("  EXIT  ",15,59,14);
}

void calculator :: prompter(int x,int y)
{
if(x == 15 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("Addition\b",14,61,19);
	}
if(x == 24 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("Subtraction\b",14,59,19);
	}
if(x == 33 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("multiplication\b",14,56,19);
	}
if(x == 42 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("Division\b",14,61,19);

	}
if(x == 51 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("Power\b",14,63,19);
	}
if(x == 60 && y == 14)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("Remainder\b",14,60,19);
	}
if(x == 15 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("sin \351\b",14,62,19);
	}
if(x == 24 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("cos \351\b",14,62,19);
	}
if(x == 33 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("tan \351\b",14,62,19);
	}
if(x == 42 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("cot \351\b",14,62,19);
	}
if(x == 51 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("sec \351\b",14,62,19);
	}
if(x == 60 && y == 16)
	{
	gtype("              ",14,56,19);
	gtype("Use arrows to select operation.",12,13,19);
	gtype("cosec \351\b",14,62,19);
	}
}

void calculator :: prompter1(int x,int y)
{
if(x == 15 && y == 14)
	{
	gtype("                                                       ",14,12,19);
	gtype("Resets the calculator. ",12,13,19);
	gtype("              ",14,56,19);
	gtype("Use arrows\b",14,58,19);
	}
if(x == 37 && y == 14)
	{
	gtype("                                                       ",14,12,19);
	gtype("Reuses the last value.  ",12,13,19);
	gtype("              ",14,56,19);
	gtype("Use arrows\b",14,58,19);
	}
if(x == 59 && y == 14)
	{
	gtype("                                                       ",14,12,19);
	gtype("Goes back to Home ",12,13,19);
	gtype("              ",14,56,19);
	gtype("Use arrows\b",14,58,19);
	}
if(x == 1 && y == 1)
	{
	gtype("                                                       ",14,12,19);
	gtype("Enter any number ",12,13,19);
	gtype("              ",14,56,19);
	}
}

void calculator :: arr_inp()
{
gtype("\20",15,8,14);
int x = 15;
int y = 14;
gtype("\370",14+BLINK,x,y);
cout<<"\b";
prompter(x,y);
int loopbreaker=0;
while(loopbreaker==0)
	{
	char a;
	a = getch();
	switch(a)
		{
		case 27:
			loopbreaker=1;
			exit(0);
			break;
		case 'e':
			loopbreaker=1;
			exit(0);
			break;
		case 'E':
			loopbreaker=1;
			exit(0);
			break;
		case 'b':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'B':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'h':
			loopbreaker=1;
			clrscr();
			g5_home();
			break;
		case 72:
			gotoxy(x,y);
			fill();
			if(y == 14)
				{
				y = 16;
				}
			else
				{
				y -= 2;
				}
			gtype("\370",14+BLINK,x,y);
			cout<<"\b";
			prompter(x,y);
			break;
			case 80:
				gotoxy(x,y);
				fill();
				if(y == 16)
					{
					y = 14;
					}
				else
					{
					y += 2;
					}
				gtype("\370",14+BLINK,x,y);
				cout<<"\b";
				prompter(x,y);
				break;
			case 77:
				gotoxy(x,y);
				fill();
				if(x == 60)
					{
					x = 15;
					}
				else
					{
					x += 9;
					}
				gtype("\370",14+BLINK,x,y);
				cout<<"\b";
				prompter(x,y);
				break;
			case 75:
				gotoxy(x,y);
				fill();
				if(x == 15)
					{
					x = 60;
					}
				else
					{
					x -= 9;
					}
				gtype("\370",14+BLINK,x,y);
				cout<<"\b";
				prompter(x,y);
				break;
			case 13:
				if(x == 15 && y == 14)
					function(1);
				if(x == 24 && y == 14)
					function(2);
				if(x == 33 && y == 14)
					function(3);
				if(x == 42 && y == 14)
					function(4);
				if(x == 51 && y == 14)
					function(5);
				if(x == 60 && y == 14)
					function(6);
				if(x == 15 && y == 16)
					{
					operation=7;
					function(7);
					}
				if(x == 24 && y == 16)
					{
					operation=8;
					function(8);
					}
				if(x == 33 && y == 16)
					{
					operation=9;
					function(9);
					}
				if(x == 42 && y == 16)
					{
					operation=10;
					function(10);
					}
				if(x == 51 && y == 16)
					{
					operation=11;
					function(11);
					}
				if(x == 60 && y == 16)
					{
					operation=12;
					function(12);
					}
		}
	}
}

void calculator :: arr_inp1()
{
int x = 15;
int y = 14;
gtype("\370",14+BLINK,x,y);
cout<<"\b";
prompter1(x,y);
int loopbreaker=0;
while(loopbreaker==0)
	{
	char a;
	a = getch();
	switch(a)
		{
		case 27:
			exit(0);
			break;
		case 'e':
			loopbreaker=1;
			exit(0);
			break;
		case 'E':
			loopbreaker=1;
			exit(0);
			break;
		case 'b':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'B':
			loopbreaker=1;
			clrscr();
			g5_menu();
			break;
		case 'h':
			loopbreaker=1;
			clrscr();
			g5_home();
			break;
		case 77:
				gotoxy(x,y);
				fill1();
				if(x == 59)
					{
					x = 15;
					}
				else
					{
					x += 22;
					}
				gtype("\370",14+BLINK,x,y);
				cout<<"\b";
				prompter1(x,y);
				break;
			case 75:
				gotoxy(x,y);
				fill1();
				if(x == 15)
					{
					x = 59;
					}
				else
					{
					x -= 22;
					}
				gtype("\370",14+BLINK,x,y);
				cout<<"\b";
				prompter1(x,y);
				break;
			case 13:
				if(x == 15 && y == 14)
					{
					calculator();
					input(1);
					}
				if(x == 37 && y == 14)
					{
					in=final;
					input(2);
					}
				if(x == 59 && y == 14)
					{
					clrscr();
					g5_menu();
					}

		}
	}
}


void calculator :: graphics()
{
int c1=9;
int c2=10;
int c3=3;
frame("\4 Calculator \4",3,34,3);
for(int x=10;x<72;x++)
	{
	gtype("\261",c1,x,8);
	gtype("\261",c1,x,12);
	gtype("\261",c2,x,18);
	gtype("\261",c3,x,9);
	gtype("\261",c3,x,11);
	}
for(int y=8;y<20;y++)
	{
	gtype("\261",c1,10,y);
	gtype("\261",c1,71,y);
	}
fill();
for(x=10;x<72;x++)
	{
	gtype("\337",15,x,20);
	}
gtype("\333",15,71,19);
gtype("\333",15,10,19);
gtype("\4 Enter \4",15,12,10);
}

void calculator :: input(int z)
{
clrscr();
graphics();
if(z==1)
	{
	prompter1(1,1);
	gtype(" ",15,8,14);
	gtype("\20",15,8,10);
	gotoxy(22,10);
	while(!(cin>>in))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,22,10);
		gotoxy(22,10);
		}
	gtype(" ",15,8,10);
	arr_inp();
	}
else if(z==2)
	{
	prompter1(1,1);
	gtype(" ",15,8,14);
	gtype("\20",15,8,10);
	gotoxy(22,10);
	cout<<in;
	gtype(" ",15,8,10);
	arr_inp();
	}
}

void calculator :: function(int z)
{
gtype(" ",15,8,14);
gtype("\20",15,8,10);
if(operation<6)
	{
	prompter1(1,1);
	gotoxy(22,10);cout<<"                                   ";
	gotoxy(22,10);
	while(!(cin>>out))
		{
		cin.clear();
		cin.ignore(999,'\n');
		gtype("                   ",4,22,10);
		gotoxy(22,10);
		}
	gotoxy(22,10);cout<<"                                    ";
	}
	if(z==1)
		{
		final=add(in,out);
		gotoxy(22,10);cout<<in<<" + "<<out<<" = "<<final;
		}
	else if(z==2)
		{
		final=subtract(in,out);
		gotoxy(22,10);cout<<in<<" - "<<out<<" = "<<final;
		}
	else if(z==3)
		{
		final=multiply(in,out);
		gotoxy(22,10);cout<<in<<" * "<<out<<" = "<<final;
		}
	else if(z==4)
		{
		final=divide(in,out);
		gotoxy(22,10);cout<<in<<" \366 "<<out<<" = "<<final;
		}
	else if(z==5)
		{
		final=exponent(in,out);
		gotoxy(22,10);cout<<in<<" ^ "<<out<<" = "<<final;
		}
	else if(z==6)
		{
		final=reminder(in,out);
		gotoxy(22,10);cout<<in<<" % "<<out<<" = "<<final;
		}
	else if(z==7)
		{
		gotoxy(22,10);cout<<"             ";
		final=sinl(in*(3.14/180));
		gotoxy(22,10);cout<<" sin( "<<in<<" ) = "<<final;
		operation=1;
		}
	else if(z==8)
		{
		gotoxy(22,10);cout<<"             ";
		final=cosl(in*(3.14/180));
		gotoxy(22,10);cout<<" cos( "<<in<<" ) = "<<final;
		operation=1;
		}
	else if(z==9)
		{
		gotoxy(22,10);cout<<"             ";
		final=tanl(in*(3.14/180));
		gotoxy(22,10);cout<<" tan( "<<in<<" ) = "<<final;
		operation=1;
		}
	else if(z==10)
		{
		gotoxy(22,10);cout<<"             ";
		final=(1/tanl(in*(3.14/180)));
		gotoxy(22,10);cout<<" cot( "<<in<<" ) = "<<final;
		operation=1;
		}
	else if(z==11)
		{
		gotoxy(22,10);cout<<"             ";
		final=(1/cosl(in*(3.14/180)));
		gotoxy(22,10);cout<<" sec( "<<in<<" ) = "<<final;
		operation=1;
		}
	else if(z==12)
		{
		gotoxy(22,10);cout<<"             ";
		final=(1/sinl(in*(3.14/180)));
		gotoxy(22,10);cout<<" cosec( "<<in<<" ) = "<<final;
		operation=1;
		}

	for(int x=11;x<71;x++)
		{
		for(int y=13;y<18;y++)
			{
			gtype("\261",6,x,y);
			}
		}
	gtype(" ",15,8,10);
	gtype("\20 ",15,8,14);
	fill1();
	arr_inp1();
	gtype("                                 ",15,22,10);

}

long float calculator :: add(long float a,long float b)
{
return a+b;
}

long float calculator :: subtract(long float a,long float b)
{
return a-b;
}

long float calculator :: multiply(long float a,long float b)
{
return a*b;
}

long float calculator :: divide(long float a,long float b)
{
return a/b;
}

long float calculator :: exponent(long float a,long float b)
{
return powl(a,b);
}

int calculator :: reminder(int a,int b)
{
return a % b;
}

void calculator :: calculator_caller()
{
int out;
c.input(1);
getch();
}