void user_menu()
{
frame("\4 Welcome \4",10,36,3);
for(int a=2;a<80;a++)
	{
	gtype("-",3,a,6);
	gtype("-",3,a,8);
	}
gtype("|",4,14,6);
gtype("|",4,14,7);
gtype("|",4,14,8);
gotoxy(4,7);textcolor(GREEN);cprintf("\4 ");textcolor(7);cprintf("E");textcolor(BLUE);cprintf("N");;textcolor(YELLOW);cprintf("T");textcolor(3);cprintf("E");textcolor(BLUE);cprintf("R");textcolor(GREEN);cprintf(" \4");
gtype("\333",4,15,14);
gtype("\333",4,38,14);
gtype("\333",2,41,14);
gtype("\333",2,64,14);
for(int x=15;x<39;x++)
	{
	gtype("\333",4,x,13);
	gtype("\333",4,x,16);
	}
for(x=41;x<65;x++)
	{
	gtype("\333",2,x,13);
	gtype("\333",2,x,16);
	}
gtype("User",15,25,14);
gtype("Admin",15,50,14);
gotoxy(16,7);
}

void user_fill1()
{
gtype(" ",15,65,15);
gtype(" ",15,14,15);
}

void user_prompter1(int x,int y)
{
if(x==14)
	{
	gtype("\20",14,x,y);
	cout<<"\b";
	gtype("                    ",15,17,7);
	gtype("User",15,17,7);
	}
if(x==65)
	{
	gtype("\21",14,x,y);
	cout<<"\b";
	gtype("                    ",15,17,7);
	gtype("Admin",15,17,7);
	}
}

void u_fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void option(int x,int y)
{
if(x == 10 && y == 10)
	{
	gtype("                    ",7,16,6);
	gtype("Create a new account",7,16,6);
	}
if(x == 10 && y == 14)
	{
	gtype("                    ",7,16,6);
	gtype("Login ",7,16,6);
	}
if(x == 10 && y == 18)
	{
	gtype("                    ",7,16,6);
	gtype("Delete Account",7,16,6);
	}
}


void user_opt_arr_inp()
{
int x = 10;
int y = 10;
gtype("\20",15,x,y);
cout<<"\b";
option(x,y);
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
			user_caller();
			break;
		case 'B':
			loopbreaker=1;
			clrscr();
			user_caller();
			break;
		case 'h':
			loopbreaker=1;
			clrscr();
			user_caller();
			break;
		case 72:
			gotoxy(x,y);
			u_fill();
			if(y == 10)
				{
				y = 18;
				}
			else
				{
				y -= 4;
				}
			gtype("\20",15,x,y);
			cout<<"\b";
			option(x,y);
			break;
			case 80:
				gotoxy(x,y);
				u_fill();
				if(y == 18)
					{
					y = 10;
					}
				else
					{
					y += 4;
					}
				gtype("\20",15,x,y);
				cout<<"\b";
				option(x,y);
				break;
			case 13:
				if(x == 10 && y == 10)
					{
					clrscr();
					user_feed();
					clrscr();
					login(1);
					loopbreaker=1;
					}
				if(x == 10 && y == 14)
					{
					clrscr();
					login(1);
					loopbreaker=1;
					}
				if(x == 10 && y == 18)
					{
					clrscr();
					user_delete();
					loopbreaker=1;
					}

		}
	}
}


void user_arr_inp()
{
int x = 14;
int y = 15;
user_prompter1(x,y);
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
		case 77:
				gotoxy(x,y);
				user_fill1();
				if(x == 65)
					{
					x = 14;
					}
				else
					{
					x += 51;
					}
				user_prompter1(x,y);
				break;
			case 75:
				gotoxy(x,y);
				user_fill1();
				if(x == 14)
					{
					x = 65;
					}
				else
					{
					x -= 51;
					}
				user_prompter1(x,y);
				break;
			case 13:
				if(x==14 && y==15)
					{
					clrscr();
					menu_graphics("\4 User \4",10,37,3,4);
					user_opt_arr_inp();
					}
				if(x==65 && y==15)
					{
					admin_login(2);
					}

		}
	}
}

void user_caller()
{
clrscr();
user_menu();
user_arr_inp();
getch();
}
