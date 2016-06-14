#ifndef map_h_included
#define map_h_included
#include <windows.h>
#include<conio.h>
#include <cstdlib>
using namespace std;
                  /*             1         2         3         4         */
                  /*             0         0         0         0         */
                  /*    0123456789 123456789 123456789 123456789 12345678*/
char map[20][60]={/*0*/"##################################################",
                  /*2*/"#                                                #",
                  /*3*/"#                                                #",
                  /*4*/"#                                                #",
                  /*5*/"#                                     @          #",
				  /*6*/"#  $  @@           #   *    #        @@@         #",
				  /*7*/"########@  @@@    @##########       #####        !",
				  /*8*/"#############################^^^#########^^#######"};
                  /*             1         2         3         4         */
                  /*             0         0         0         0         */
                  /*    0123456789 123456789 123456789 123456789 12345678*/
char map2[20][60]={/*0*/"##################################################",
                   /*2*/"#                                                #",
				   /*3*/"#                                                #",
				   /*4*/"#         @@@@@                                  #",
				   /*5*/"#         #####                                  #",
				   /*6*/"#    @@            #   *    #                    #",
				   /*7*/"#  $    @  @@@    @##########   #    *  #        !",
				   /*8*/"#############################^^^#########^^#######"};
int menu()
{
	cout<<"1-Play"<<'\n';
	cout<<"2-Exit"<<'\n';
       int in; 
        cin>>in;
        system ("cls");
 if(in==1) system ("cls");

/*{
 for (int o=10;o<100;o=o+10)
 {
	 cout<<"Loading"<<o<<"%"<<'\n';
      Sleep(300);
	 system("cls");
 }
}*/
else exit(0); 
return 0;

}
///////////////////////////////////
int ExitGame(int score,int level, int hp)
{
    system("cls");
	cout<<"Scores="<<score<<" Level="<<level<<" Health="<<hp<<'\n'<<'\n';
        cout<<"Are you sure you want to exit???"<<'\n';
	    cout<<"1-Yes/2-No"<<'\n';
       int in; 
        cin>>in;
        if (in==1) exit(0);
	return 0;
}
int GameOver(int score,int level, int hp)
{
	{
		system("cls");
		cout<<"Game over"<<'\n';
		cout<<"Scores="<<score<<" Level="<<level<<" Health="<<hp<<'\n';
	}
	//getch();exit(0);
return 0;
}
#endif