void menu_frame()
{
frame("\4 Menu \4",9,37,3);
for(int a=2;a<80;a++)
	{
	gtype("-",3,a,5);
	gtype("-",3,a,7);
	}
gtype("|",4,14,5);
gtype("|",4,14,6);
gtype("|",4,14,7);
gotoxy(4,6);textcolor(GREEN);cprintf("\4 ");textcolor(7);cprintf("E");textcolor(9);cprintf("N");textcolor(YELLOW);cprintf("T");textcolor(3);cprintf("E");textcolor(9);cprintf("R");textcolor(GREEN);cprintf(" \4");
	for(int i=27;i<32;i++)
		{
		textcolor(LIGHTRED);gotoxy(i,10);cprintf("\260");
		textcolor(LIGHTRED);gotoxy(i,12);cprintf("\260");
		textcolor(8);gotoxy(i,14);cprintf("\260");
		textcolor(8);gotoxy(i,16);cprintf("\260");
		}
	textcolor(8);gotoxy(27,11);cprintf("\260");gotoxy(31,11);cprintf("\260");
	textcolor(YELLOW);gotoxy(28,11);textbackground(co);cprintf(" \344 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(25,10);cprintf("C");

	textcolor(RED);gotoxy(27,15);cprintf("\260");gotoxy(31,15);cprintf("\260");
	textcolor(YELLOW);gotoxy(28,15);textbackground(co);cprintf(" \360 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(25,14);cprintf("M");         // h 235
	for(i=39;i<44;i++)
		{
		textcolor(LIGHTGREEN);gotoxy(i,10);cprintf("\260");
		textcolor(LIGHTGREEN);gotoxy(i,12);cprintf("\260");
		textcolor(WHITE);gotoxy(i,14);cprintf("\260");
		textcolor(WHITE);gotoxy(i,16);cprintf("\260");
		}
	textcolor(8);gotoxy(39,11);cprintf("\260");gotoxy(43,11);cprintf("\260");
	textcolor(YELLOW);gotoxy(40,11);textbackground(co);cprintf(" \235 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(37,10);cprintf("H");

	textcolor(RED);gotoxy(39,15);cprintf("\260");gotoxy(43,15);cprintf("\260");
	textcolor(YELLOW);gotoxy(40,15);textbackground(co);cprintf(" \355 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(37,14);cprintf("S");

	for(i=51;i<56;i++)
		{
		textcolor(LIGHTBLUE);gotoxy(i,10);cprintf("\260");
		textcolor(LIGHTBLUE);gotoxy(i,12);cprintf("\260");
		textcolor(8);gotoxy(i,14);cprintf("\260");
		textcolor(8);gotoxy(i,16);cprintf("\260");
		}
	textcolor(8);gotoxy(51,11);cprintf("\260");gotoxy(55,11);cprintf("\260");
	textcolor(YELLOW);gotoxy(52,11);textbackground(co);cprintf(" \355 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(49,10);cprintf("K");

	textcolor(RED);gotoxy(51,15);cprintf("\260");gotoxy(55,15);cprintf("\260");
	textcolor(YELLOW);gotoxy(52,15);textbackground(co);cprintf(" \352 ");
	textbackground(NULL);
	textcolor(CYAN);gotoxy(49,14);cprintf("R");  //m 360
	textcolor(8);gotoxy(16,7);
	textbackground(NULL);
}

void menu_fill()
{
gtype(" ",14,25,11);
gtype(" ",14,25,15);
gtype(" ",14,37,11);
gtype(" ",14,37,15);
gtype(" ",14,37,19);
gtype(" ",14,49,11);
gtype(" ",14,49,15);
}

void enter_text(int x,int y)
{
if(x == 25 && y == 11)
	{
	gtype("                         ",7,16,6);
	gtype("Calculator",7,16,6);
	}
if(x == 37 && y == 11)
	{
	gtype("                         ",7,16,6);
	gtype("Horoscope",7,16,6);
	}
if(x == 49 && y == 11)
	{
	gtype("                         ",7,16,6);
	gtype("Keep",7,16,6);
	}
if(x == 25 && y == 15)
	{
	gtype("                         ",7,16,6);
	gtype("Messaging ( The Chatbot )",7,16,6);
	}
if(x == 37 && y == 15)
	{
	gtype("                         ",7,16,6);
	gtype("Settings ",7,16,6);
	}
if(x == 49 && y == 15)
	{
	gtype("                         ",7,16,6);
	gtype("Reminders",7,16,6);
	}
}

void g5_menu()
{
clrscr();
menu_frame();
int x = 25;
int y = 11;
enter_text(x,y);
gtype("\370",15,x,y);
cout<<"\b";
while(1)
	{
	char a;
	a = getch();
	switch(a)
		{
		case 27:
			exit(0);
			break;
		case 'e':
			exit(0);
			break;
		case 'E':
			exit(0);
			break;
		case 'h':
			clrscr();
			g5_home();
			break;
		case 'b':
			clrscr();
			g5_home();
			break;
		case 72:
			gotoxy(x,y);
			menu_fill();
			if(y == 11)
				{
				y = 15;
				}
			else
				{
				y -= 4;
				}
			enter_text(x,y);
			gtype("\370",15,x,y);
			cout<<"\b";
			break;
		case 80:
			gotoxy(x,y);
			menu_fill();
			if(y == 15)
				{
				y = 11;
				}
			else
				{
				y += 4;
				}
			enter_text(x,y);
			gtype("\370",15,x,y);
			cout<<"\b";
			break;
		case 77:
			gotoxy(x,y);
			menu_fill();
			if(x == 49)
				{
				x = 25;
				}
			else
				{
				x += 12;
				}
			if(x == 25  &&  y == 18)
				{
				y = 10;
				}
			enter_text(x,y);
			gtype("\370",15,x,y);
			cout<<"\b";
			break;
		case 75:
			gotoxy(x,y);
			menu_fill();
			if(x == 25)
				{
				x = 49;
				}
			else
				{
				x -= 12;
				}
			enter_text(x,y);
			gtype("\370",15,x,y);
			cout<<"\b";
			break;
		case 13:
				if(x == 25 && y == 11)
					{
					clrscr();
					c.calculator_caller();
					}
				if(x == 37 && y == 11)
					{
					clrscr();
					hor.hor_caller();
					}
				if(x == 49 && y == 11)
					{
					clrscr();
					locker_caller();
					}
				if(x == 25 && y == 15)
					{
					clrscr();
					clr=0;
					location=4;
					gotoxy(1,6);
					cb.cb_caller();
					}
				if(x == 37 && y == 15)
					{
					clrscr();
					menu_graphics("\4 Settings \4",10,34,3,3);
					settings();
					}
				if(x == 49 && y == 15)
					{
					clrscr();
					rem_caller();
					}
		}
	}
}
