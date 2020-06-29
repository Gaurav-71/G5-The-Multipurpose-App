

void horoscope :: hor_frame(int b)
{
clrscr();
_strdate(dateStr); // for date
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,5);
		gtype("-",3,a,7);
		}
	gtype("|",4,14,5);
	gtype("|",4,14,6);
	gtype("|",4,14,7);
	if(b==1)
		{
		gtype("Date",15,6,6);
		gtype(dateStr,9,16,6);
		frame("\4 Today's Horoscope \4",15,32,3);
		gtype(starsign,5,69,6);
		}
	else if(b==2)
		{
		frame("\4 Weekly Horoscope \4",15,33,3);
		gtype("Starsign",15,4,6);
		gtype(starsign,5,16,6);
		}
	else if(b==3)
		{
		frame("\4 Yearly Horoscope \4",15,33,3);
		gtype("Starsign",15,4,6);
		gtype(starsign,5,16,6);
		}
}


void horoscope :: hor_sort()
{
if ((user.mm ==1 && user.dd >= 20) || ( user.mm == 2 && user.dd <=18)) //aquarius
	{
	strcpy(hor.starsign,"Aquarius");
	}
else if (( user.mm == 2 && user.dd >= 19) || ( user.mm == 3 && user.dd <= 20)) //pisces
	{
	strcpy(hor.starsign,"Pisces");
	}
else if (( user.mm == 3 && user.dd >= 21) || ( user.mm == 4 && user.dd <= 19)) //aries
	{
	strcpy(hor.starsign,"Aries");
	}
else if (( user.mm == 4 && user.dd >= 20) || ( user.mm == 5 && user.dd <= 20)) //taurus
	{
	strcpy(hor.starsign,"Taurus");
	}
else if (( user.mm == 5 && user.dd >= 21 ) || ( user.mm == 6 && user.dd <= 20 )) //gemini
	{
	strcpy(hor.starsign,"Gemini");
	}
else if (( user.mm == 6 && user.dd >= 21 ) || ( user.mm == 7 && user.dd <= 22 )) //cancer
	{
	strcpy(hor.starsign,"Cancer");
	}
else if (( user.mm == 7 && user.dd <= 23 ) || ( user.mm == 8 && user.dd <= 22)) //leo
	{
	strcpy(hor.starsign,"Leo");
	}
else if (( user.mm == 8 && user.dd >= 23 ) || ( user.mm == 9 && user.dd <= 22 )) //virgo
	{
	strcpy(hor.starsign,"Virgo");
	}
else if (( user.mm == 9 && user.dd >= 23 ) || ( user.mm == 10 && user.dd <= 22)) //libra
	{
	strcpy(hor.starsign,"Libra");
	}
else if (( user.mm == 10 && user.dd >= 23 ) || ( user.mm == 11 && user.dd <= 21)) //scorpio
	{
	strcpy(hor.starsign,"Scorpio");
	}
else if (( user.mm == 11 && user.dd >= 22 ) || ( user.mm == 12 && user.dd <= 21)) //sagitarius
	{
	strcpy(hor.starsign,"Sagitarius");
	}
else if (( user.mm == 12 && user.dd >= 22 ) || ( user.mm==1 && user.dd<= 19 )) //capricorn
	{
	strcpy(hor.starsign,"Capricorn");
	}
else
	{
	cout<<" INVALID INPUT";
	}
}

void horoscope :: stars()
{
textcolor(WHITE);
clrscr();
cprintf("");
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n\n                        ACCESING YOUR FORTUNE FROM YOUR STARS                 ";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
cout<<"\n *         *           *            *            *            *              *";
cout<<"\n\n      *          *           *             *           *             * ";
delay(1000);
}


void horoscope :: today()
{
int rand_today;
randomize();
stars();
delay(200);
clrscr();
textcolor(LIGHTRED);
rand_today=random(3);
if(rand_today==0)
	{
	hor_frame(1);
	gotoxy(3,10);textcolor(LIGHTGREEN);cprintf("\4 YOU HAVE A GREAT DAY AHEAD OF YOU.");
	gotoxy(3,12);textcolor(LIGHTGREEN);cprintf("\4 YOU ARE BLESSED WITH THE ABILITY TO SOLVE COMPLEX PROBLEMS.");
	gotoxy(3,14);textcolor(LIGHTGREEN);cprintf("\4 YOU WILL HELP WHO ARE IN NEED.");
	gotoxy(3,16);textcolor(LIGHTGREEN);cprintf("\4 LUCKY COLOUR :");textcolor(CYAN);cprintf(" CYAN");
	gotoxy(3,18);textcolor(LIGHTGREEN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("2");
	}
if(rand_today==1)
	{
	hor_frame(1);
	gotoxy(3,10);textcolor(LIGHTGREEN);cprintf("\4 RECOGNITION AND REWARDS ARE AWAITING YOU AT WORK/SCHOOL.");
	gotoxy(3,12);textcolor(LIGHTGREEN);cprintf("\4 FRIENDS WONT BE ENVIOUS OF YOUR SUCCESS.");
	gotoxy(3,14);textcolor(LIGHTGREEN);cprintf("\4 FRIENDS AND FAMILY WILL PROVIDE MOTIVATION FOR TAKING UP NEW CHALLENGES.");
	gotoxy(3,16);textcolor(LIGHTGREEN);cprintf("\4 LUCKY COLOUR :");textcolor(LIGHTBLUE);cprintf(" BLUE");
	gotoxy(3,18);textcolor(LIGHTGREEN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("1");
	}
if(rand_today==2)
	{
	hor_frame(1);
	gotoxy(3,10);textcolor(LIGHTGREEN);cprintf("\4 PEOPLE WILL UNDERSTAND YOU BETTER.");
	gotoxy(3,12);textcolor(LIGHTGREEN);cprintf("\4 PEOPLE NEED YOUR GOOD ADVICE.");
	gotoxy(3,14);textcolor(LIGHTGREEN);cprintf("\4 YOU WILL SHINE LIKE THE BRIGHTEST STAR.");
	gotoxy(3,16);textcolor(LIGHTGREEN);cprintf("\4 LUCKY COLOUR :");textcolor(YELLOW);cprintf(" YELLOW");
	gotoxy(3,18);textcolor(LIGHTGREEN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("7");
	}
}

void horoscope :: weekly()
{
int rand_weekly;
randomize();
stars();
delay(200);
clrscr();
textcolor(LIGHTRED);
rand_weekly=random(4);
if(rand_weekly==0)
	{
	hor_frame(2);
	gotoxy(3,10);textcolor(CYAN);cprintf("\4 YOU HAVE A GREAT DAY AHEAD OF YOU.");
	gotoxy(3,12);textcolor(CYAN);cprintf("\4 YOU ARE BLESSED WITH THE ABILITY TO SOLVE COMPLEX PROBLEMS.");
	gotoxy(3,14);textcolor(CYAN);cprintf("\4 YOU WILL HELP WHO ARE IN NEED.");
	gotoxy(3,16);textcolor(CYAN);cprintf("\4 LUCKY COLOUR :");textcolor(GREEN);cprintf(" GREEN");
	gotoxy(3,18);textcolor(CYAN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("3");
	}
if(rand_weekly==1)
	{
	hor_frame(2);
	gotoxy(3,10);textcolor(CYAN);cprintf("\4 LOT OF AFFECTION WILL BE SHOWN TOWARDS YOU.");
	gotoxy(3,12);textcolor(CYAN);cprintf("\4 YOU WILL ENJOY THE COMPANY OF YOUR RELATIVES.");
	gotoxy(3,14);textcolor(CYAN);cprintf("\4 LONG TERM RELATIONSHIPS WIL ALSO THRIVE.");
	gotoxy(3,16);textcolor(CYAN);cprintf("\4 LUCKY COLOUR :");textcolor(RED);cprintf(" RED");
	gotoxy(3,18);textcolor(CYAN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("4");
	}
if(rand_weekly==2)
	{
	hor_frame(2);
	gotoxy(3,10);textcolor(CYAN);cprintf("\4 YOU WILL ENJOY GOOD HEALTH AND FAME.");
	gotoxy(3,12);textcolor(CYAN);cprintf("\4 YOUR SOCIAL STANDING MAY GET STRONGER.");
	gotoxy(3,14);textcolor(CYAN);cprintf("\4 PEOPLE MAY DEVELOP A HIGH OPINION ABOUT YOU.");
	gotoxy(3,16);textcolor(CYAN);cprintf("\4 LUCKY COLOUR :");textcolor(BLUE);cprintf(" BLUE");
	gotoxy(3,18);textcolor(CYAN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("5");
	}
if(rand_weekly==3)
	{
	hor_frame(2);
	gotoxy(3,10);textcolor(CYAN);cprintf("\4 YOU WILL MEET NEW PEOPLE TODAY.");
	gotoxy(3,12);textcolor(CYAN);cprintf("\4 OLD FRIENDS WILL BE MET ONCE AGAIN.");
	gotoxy(3,14);textcolor(CYAN);cprintf("\4 ENEMIES WILL BECOME GOOD FRIENDS.");
	gotoxy(3,16);textcolor(CYAN);cprintf("\4 LUCKY COLOUR :");textcolor(WHITE);cprintf(" WHITE");
	gotoxy(3,18);textcolor(CYAN);cprintf("\4 LUCKY NUMBER : ");textcolor(WHITE);cprintf("6");
	}
}

void horoscope :: yearly()
{
stars();
delay(200);
clrscr();
hor_frame(3);
gotoxy(3,10);textcolor(CYAN);cprintf("\4 THE CELESTIAL MOVEMENTS ENCOURAGE YOU TO THINK ABOUT YOUR FUTURE.");
gotoxy(3,12);textcolor(CYAN);cprintf("\4 WITH YOUR DYNAMISM, YOU'RE IN THE BEST POSITION TO HAVE A HEAD START.");
gotoxy(3,14);textcolor(CYAN);cprintf("\4 YOU WILL BE IN CONTROL OF YOUR ACTIONS AND YOU CAN REST ASSURED THAT THIS       PERIOD IN TIME WILL BE A FAVORABLE ONE FOR YOU.");
gotoxy(3,17);textcolor(CYAN);cprintf("\4 LUCKY COLOUR :");textcolor(RED);cprintf(" RED");
gotoxy(27,19);textcolor(GREEN);cprintf("WHAT MORE COULD YOU ASK FOR ? ");
gtype("\260",4,1,15);
gtype("\260",4,80,14);
}

void horoscope :: fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void horoscope :: option(int x,int y)
{
if(x == 10 && y == 10)
	{
	gtype("                  ",7,16,6);
	gtype("Today's Horoscope",7,16,6);
	}
if(x == 10 && y == 14)
	{
	gtype("                  ",7,16,6);
	gtype("Weekly Horoscope",7,16,6);
	}
if(x == 10 && y == 18)
	{
	gtype("                  ",7,16,6);
	gtype("Yearly Horoscope",7,16,6);
	}
}

void horoscope :: arr_inp()
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
				fill();
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
					today();
					}
				if(x == 10 && y == 14)
					{
					weekly();
					}
				if(x == 10 && y == 18)
					{
					yearly();
					}

		}
	}
}

void horoscope :: hor_caller()
{
clrscr();
hor_sort();
menu_graphics("\4 Horoscope \4",15,35,3,2);
arr_inp();
}
