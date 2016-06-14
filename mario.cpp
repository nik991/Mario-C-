#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <map.h>
#include <Windows.h>
#include <Winuser.h>

using namespace std; 
// game setup
int y; int y2; int x; int x2;
int level=1;
int speed=20;
// game data
int hp=100;
int score=0; char key;
///////////////////////////////////////
int main()
{	//setlocale(LC_ALL,"RUS");
	menu();
	while (level==1)
	{
		system("cls");
		cout<<"scores "<<score<<" | Level="<<level<<" | Health="<<hp<<'\n';
			for (y=0;y<9;y++) cout<<map[y]<<'\n';
            for (y=0;y<9;y++)
			    for (x=0;x<60;x++)
				{
					if (map[y][x]=='$')
					{   key=0;
						if(kbhit())//buffer keyboard not empty?
        {
        key=getch();
            switch (key)
            {
			case 27 : ExitGame(score,level,hp);break;
/////////////////////////////////////////////////  Up arrow press
            case 72:
				{
					y2=(y-3);x2=x+2;
				switch(map[y2][x2])
				{
					case' ':
					{
						map[y][x]=' ';
						y-=3;x=x+2;
						map[y2][x2]='$';
					}break;
					case '!':{GameOver(score,level,hp);
						cout<<"Scores="<<score<<" Level="<<level<<" Health="<<hp<<'\n';}break;//level=2;break;
				
				case '@':
					{
						score+=10;
						map[y][x]=' ';
						y-=1;x=x+2;
						map[y2][x2]='$';
					}break;
				
				}
				}
                break;
////////////////////////////////////////////////   Left arrow press
            case 75:
				{
					 x2=(x-1);
					switch(map[y][x2])
				{
					case' ':
					{
						map[y][x]=' ';
						x-=1;
						map[y][x2]='$';
					}break;
				case '!':level=2;break;
				case '*':{hp-=10;
						 map[y][x]=' ';
						 x-=1;
						 map[y][x2]='$';}break;
				case '@':
					{
						score+=10;
						map[y][x]=' ';
						x-=1;
						map[y][x2]='$';
					}

				}
				}
                break;
////////////////////////////////////////////////   Right arrow press 
			case 77:
            {			    x2=(x+1);
					switch(map[y][x2])
				{
					case' ':
					{
						map[y][x]=' ';
						x+=1;
						map[y][x2]='$';
					}break;
				case '!':level=2;break;
				case '*':{hp-=10;
						 map[y][x]=' ';
						 x+=1;
						 map[y][x2]='$';}break;
				case '@':
					{
						score+=10;
						map[y][x]=' ';
						x+=1;
						map[y][x2]='$';
					}

 	     	     }
              }   
}
////////////////////////////////////////////////   End of switch
			  ///   GRAVITY   ///
	}
						 y2=(y+1); 
			   while ((map[y2][x]==' ')|(map[y2][x]=='@')|(map[y2][x]=='^'))
			   {
				switch(map[y2][x])
				{
				case' ':
					{
						map[y][x]=' ';
						y+=1;
						map[y2][x]='$';
					}break;
				case '!':level=2;break;
				case '^':{hp=0;GameOver(score,level,hp);}break;
				case '@':
					{
						score+=10;
						map[y][x]=' ';
						y+=1;
						map[y2][x]='$';
					}break;
				case '*':
					{
						map[y][x]=' ';
						y+=1;
						map[y2][x]='$';
					}break;
				}
        } 
}

//////////////////////////////////////////////////////// mob
				switch(map[y][x])
				{
				case '*':
					{
						srand(time(0));
						int i=rand()&2;
						if (i==0)
						{
							int x2=x+1;
							switch(map[y][x2])
							{
							case ' ':
								{
									map [y][x]=' ';
									x+=1;
									map[y][x2]='*';
								}break;
					    }   }
						else
						{
							int x2=x-1;
							switch(map[y][x2])
							{
							case ' ':
								{
									map [y][x]=' ';
									x+=1;
									map[y][x2]='*';
								}break;
							case '$': {
								        hp-=10;

									  }break;
							}
						}
						
					}
				}
					switch (map[y][x])
					{
						GameOver(score,level,hp);
					}
}
Sleep(speed);
} //if (level=2) GameOver(score,level,hp);
while (level==2)
	{
		system("cls");
		cout<<"scores "<<score<<" | Level="<<level<<" | Health="<<hp<<'\n';
			for (y=0;y<9;y++) cout<<map2[y]<<'\n';
            for (y=0;y<9;y++)
			    for (x=0;x<60;x++)
				{
					if (map2[y][x]=='$')
					{   key=0;
						if(kbhit())//buffer keyboard not empty?
        {
        key=getch();
            switch (key)
            {
			case 27 : ExitGame(score,level,hp);break;  ////escape key press
/////////////////////////////////////////////////  Up arrow press
            case 72:
				{
					y2=(y-3);x2=x+2;
				switch(map2[y2][x2])
				{
					case' ':
					{
						map2[y][x]=' ';
						y-=3;x=x+2;
						map2[y2][x2]='$';
					}break;
					
				
				case '@':
					{
						score+=10;
						map2[y][x]=' ';
						y-=1;x=x+2;
						map2[y2][x2]='$';
					}break;
				
				}
				}
                break;
////////////////////////////////////////////////   Left arrow press
            case 75:
				{
					 x2=(x-1);
					switch(map2[y][x2])
				{
					case' ':
					{
						map2[y][x]=' ';
						x-=1;
						map2[y][x2]='$';
					}break;
				case '!':level+=1;break;
				case '*':{hp-=10;
						 map2[y][x]=' ';
						 x-=1;
						 map2[y][x2]='$';}break;
				case '@':
					{
						score+=10;
						map2[y][x]=' ';
						x-=1;
						map2[y][x2]='$';
					}

				}
				}
                break;
////////////////////////////////////////////////   Right arrow press 
			case 77:
            {			    x2=(x+1);
					switch(map2[y][x2])
				{
					case' ':
					{
						map2[y][x]=' ';
						x+=1;
						map2[y][x2]='$';
					}break;
				case '!':level+=1;break;
				case '*':{hp-=10;
						 map2[y][x]=' ';
						 x+=1;
						 map2[y][x2]='$';}break;
				case '@':
					{
						score+=10;
						map2[y][x]=' ';
						x+=1;
						map2[y][x2]='$';
					}

 	     	     }
              }   
}
////////////////////////////////////////////////   End of switch
			  ///   GRAVITY   ///
	}
						 y2=(y+1); 
			   while ((map2[y2][x]==' ')|(map2[y2][x]=='@')|(map2[y2][x]=='^'))
			   {
				switch(map2[y2][x])
				{
				case' ':
					{
						map2[y][x]=' ';
						y+=1;
						map2[y2][x]='$';
					}break;
				case '!':level+=1;break;
				case '^':{hp=0;GameOver(score,level,hp);}break;
				case '@':
					{
						score+=10;
						map2[y][x]=' ';
						y+=1;
						map2[y2][x]='$';
					}break;
				case '*':
					{
						map2[y][x]=' ';
						y+=1;
						map2[y2][x]='$';
					}break;
				}
        } 
}

//////////////////////////////////////////////////////////// mob
				switch(map2[y][x])
				{
				case '*':
					{
						srand(time(0));
						int i=rand()&2;
						if (i==0)
						{
							int x2=x+1;
							switch(map2[y][x2])
							{
							case ' ':
								{
									map2[y][x]=' ';
									x+=1;
									map2[y][x2]='*';
								}break;
					    }   }
						else
						{
							int x2=x-1;
							switch(map2[y][x2])
							{
							case ' ':
								{
									map2[y][x]=' ';
									x+=1;
									map2[y][x2]='*';
								}break;
							case '$': {
								        hp-=10;

									  }break;
							}
						}
						
					}
				}
					switch (map2[y][x])
					{
						GameOver(score,level,hp);
					}
}
Sleep(speed);
} if (level==3) 
{
	    system("cls");
		cout<<"         ***        GREAT!         ***           "<<'\n'<<'\n';
		cout<<"Scores="<<score<<" Level="<<level<<" Health="<<hp<<'\n';
		level=1;main();
}
getch();
return 0;
}

