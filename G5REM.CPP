int reminders :: find(char string[])
	{
	if(!strcmpi(reminders_index,string))
		return 1;
	else
		return 0;
	}

void reminders :: input()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
frame("\4 Reminder \4",9,37,3);
gtype("\4 Enter all the details accordingly \4",5,22,8);
gtype("\20 Title : ",12,3,12);gets(reminders_index);
gtype("\20 Your Reminder : ",10,3,14);gets(rem);
}

void reminders_feed()
{
file_namer();
clrscr();
ofstream ofile;
ofile.open(reminders_file, ios :: app | ios :: binary);
r1.input();
ofile.write((char*)&r1,sizeof(r1));
ofile.close();
}

void reminders :: output()
{
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
frame("\4 Reminder \4",9,37,3);
gtype("\20 Title : ",12,3,12);cout<<reminders_index;
gtype("\20 Your Reminder : ",10,3,14);cout<<rem;
}

void reminders_searcher()
{
file_namer();
clrscr();
int ch = 0;
char search[20];	//variable for accepting roll to be searched
ifstream ifile;
ifile.open(reminders_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&r1,sizeof(r1));
int x22=20;
int z=9;
while(!ifile.eof())
	{
	int a=wherey();
	if(z>=19)
		{
		x22=50;
		z=10;
		}
	else
		{
		z++;
		}
	gotoxy(x22,z);
	cout<<"  "<<r1.reminders_index<<endl;
	a=wherey();
	if(a>=19)
		{
		gotoxy(x22,z);
		cout<<"  "<<endl;
		cout<<r1.reminders_index;
		}
	ifile.read((char*)&r1,sizeof(r1));
	gtype("                     ",4,1,20);
	gtype("                     ",4,1,19);
	}
frame("\4 View Data \4",7,35,3);
gotoxy(3,7);cout<<"Enter the title : ";gets(search);
ifile.close();
ifstream ifile1;
ifile1.open(reminders_file,ios::in | ios :: binary);
ifile1.read((char*)&r1,sizeof(r1));
while(!ifile1.eof() && ch == 0)
	{
	ch = r1.find(search);
	if(ch == 1)
		{
		clrscr();
		r1.output();
		}
	else
		ifile1.read((char*)&r1,sizeof(r1));
	}
if(ch == 0)
	{
	gtype("\4 Error 404 : File not found ! \4",4,26,6);
	getch();
	}
}

void reminders :: reminders_mod_rec(char mod_index[])
{
clrscr();
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,10);
		}
frame("\4 Reminders \4",9,37,3);
gtype("\4 Enter new details accordingly \4",5,22,8);
strcpy(mod_index,reminders_index);
gtype("\20 Title : ",12,3,12);cout<<mod_index;
gtype("\20 Your Reminder : ",10,3,14);gets(rem);
}

void reminders_modify()
{
file_namer();
clrscr();
int rec = 0;
char del[20];	//variable for accepting roll to be searched
char ch='y';
int i;
ifstream ifile;
ifile.open(reminders_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&r1,sizeof(r1));
int x22=20;
int z=9;
while(!ifile.eof())
	{
	int a=wherey();
	if(z>=19)
		{
		x22=50;
		z=10;
		}
	else
		{
		z++;
		}
	gotoxy(x22,z);
	cout<<"  "<<r1.reminders_index<<endl;
	a=wherey();
	if(a>=19)
		{
		gotoxy(x22,z);
		cout<<"  "<<endl;
		cout<<r1.reminders_index;
		}
	ifile.read((char*)&r1,sizeof(r1));
	gtype("                     ",4,1,20);
	gtype("                     ",4,1,19);
	}
ifile.close();
frame("\4 View Data \4",7,35,3);
gotoxy(3,7);cout<<"Enter the title : ";
gets(del);
fstream mfile;
mfile.open(reminders_file,ios :: in | ios :: out | ios :: binary);
mfile.read((char*)&r1,sizeof(r1));
rec++;
while(!mfile.eof() && ch == 'y')
	{
	i = r1.find(del);
	if(i == 1)
		{
		r1.reminders_mod_rec(del);
		mfile.seekg((rec-1)*sizeof(r1),ios::beg);
		mfile.write((char*)&r1,sizeof(r1));
		ch = 'n';
		}
	else
		{
		mfile.read((char*)&r1,sizeof(r1));
		rec++;
		}
	}
if(i == 0)
	{
	gtype("\4 Error 404 : File not found ! \4",4,26,6);
	}
if(i == 1)
	{
	modified();
	}
}

void rem_del()
{
file_namer();
clrscr();
char del[30];
int ch=0;
ifstream ifile;
ifile.open(reminders_file,ios::in | ios :: binary);
frame("\4 View Data \4",7,35,3);
for(int a=2;a<80;a++)
		{
		gtype("-",3,a,6);
		gtype("-",3,a,8);
		}
ifile.read((char*)&r1,sizeof(r1));
int x22=20;
int z=9;
if(ifile)
	{
	while(!ifile.eof())
		{
		int a=wherey();
		if(z>=19)
			{
			x22=50;
			z=10;
			}
		else
			{
			z++;
			}
		gotoxy(x22,z);
		cout<<"  "<<r1.reminders_index<<endl;
		a=wherey();
		if(a>=19)
			{
			gotoxy(x22,z);
			cout<<"  "<<endl;
			cout<<r1.reminders_index;
			}
		ifile.read((char*)&r1,sizeof(r1));
		gtype("                     ",4,1,20);
		gtype("                     ",4,1,19);
		}
	}
else
	{
	clrscr();
	error();
	}
ifile.close();
frame("\4 Modify Data \4",7,35,3);
gotoxy(3,7);cout<<"Enter the title : ";
gets(del);
ifstream ifile1;
ofstream ofile1;
ifile1.open(reminders_file,ios :: in);
ofile1.open(reminders_file_temp,ios :: out);
ifile1.read((char*)&r1,sizeof(r1));
if(ifile1)
	{
	while(!ifile1.eof())
		{
		ch=r1.find(del);
		if(ch==0)
			{
			ofile1.write((char*)&r1,sizeof(r1));
			}
		ifile1.read((char*)&r1,sizeof(r1));
		}
	}
else
	{
	clrscr();
	error();
	}
ofile1.close();
ifile1.close();
remove(reminders_file);
rename(reminders_file_temp,reminders_file);
if(ch==0)
	{
	error();
	}
else if(ch==1)
	{
	deleted();
	}
}

void	rem_fill()
{
for(int y=10;y<19;y++)
	{
	gtype(" ",15,10,y);
	}
}

void rem_option(int x,int y)
{
	if(x == 10 && y == 10)
		{
		gtype("                  ",7,16,6);
		gtype("Add Data",7,16,6);
		}
	if(x == 10 && y == 14)
		{
		gtype("                  ",7,16,6);
		gtype("View Data",7,16,6);
		}
	if(x == 10 && y == 18)
		{
		gtype("                  ",7,16,6);
		gtype("Modify / Delete",7,16,6);
		}

}

void  rem_arr_inp()
{
int x = 10;
int y = 10;
gtype("\20",15,x,y);
cout<<"\b";
rem_option(x,y);
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
			exit(0);
			break;
		case 'E':
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
			rem_fill();
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
			rem_option(x,y);
			break;
			case 80:
				gotoxy(x,y);
				rem_fill();
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
				rem_option(x,y);
				break;
			case 13:
					if(x == 10 && y == 10)
						{
						reminders_feed();
						loopbreaker=1;
						}
					if(x == 10 && y == 14)
						{
						reminders_searcher();
						loopbreaker=1;
						}
					if(x == 10 && y == 18)
						{
						select_md();
						if(opt_md=='m')
							{
							reminders_modify();
							}
						else if(opt_md=='d')
							{
							rem_del();
							}
						loopbreaker=1;
						}


		}
	}
}

void rem_caller()
{
menu_graphics("\4 Reminders \4",10,35,3,1);
rem_arr_inp();
}

