#include "Plansza.h"
#include <iostream>

using namespace std;

void Plansza::czyscPlansze(int tab[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			tab[i][j]=0;
	}	
}//f-cja czysci plansze przez zerowanie macierzy

void Plansza::zaznaczPole(int tab[3][3], int var)
{
	bool toExit=0;
	int wyborPolaNaPlanszy;
	
		do
	{
		
		cin>>wyborPolaNaPlanszy;
		if(wyborPolaNaPlanszy<1 || wyborPolaNaPlanszy>9)
		cout<<"\n   Musisz wybrac liczbe od 1 do 9!!!\n";
	}while(wyborPolaNaPlanszy<1 || wyborPolaNaPlanszy>9);
		
	do
	{
	
	switch(wyborPolaNaPlanszy)
	{
		case 7:
			if(tab[0][0]==0)
				{
				tab[0][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
		case 8:
			if(tab[0][1]==0)
				{
				tab[0][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 9:
			if(tab[0][2]==0)
				{
				tab[0][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 4:
				if(tab[1][0]==0)
				{
				tab[1][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 5:
			if(tab[1][1]==0)
				{
				tab[1][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}		
		break;
		
		case 6:
			if(tab[1][2]==0)
				{
				tab[1][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 1:
			if(tab[2][0]==0)
				{
				tab[2][0]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
			
		break;
		
		case 2:
			if(tab[2][1]==0)
				{
				tab[2][1]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
		case 3:
			if(tab[2][2]==0)
				{
				tab[2][2]=var;
				toExit=1;
				}
			else
				{
					cout<<"\nMusisz podac nie zajete pole !!!!\n";
					cin>>wyborPolaNaPlanszy;
				}
		break;
		
	}
	}while(toExit==0);
	
	
}// f-cja wypelniajaca plansze cyframi 1 oraz odpowiadajacymi za X oraz O 

void Plansza::zaznaczPoleSI(int tab[3][3], int var)
	{
		bool firstCheck=true;
		for(int a=0;a<3;a++)
			{
				for(int b=0;b<3;b++)
				{
					if(tab[a][b]!=0)
						firstCheck=false;
				}
			} //sprawdzenie czy cpu zaczyna
		
		if(firstCheck==true)
			tab[0][0]=var;
		
		else
			{
				int tab2[3][3];
				bool winCheck =0;
				bool loseCheck =0;
				bool randomMatch =0;
				
			for(int a=0;a<3;a++)
			{
				for(int b=0;b<3;b++)
				{
					tab2[a][b]=tab[2-a][2-b];
				}
			} // tworzenie tablicy odwrotnej
			
			for(int a=0;a<3;a++)
			{
				for(int b=0;b<3;b++)
				{
					if(a==1 && b==1)
					continue;
					if(tab[a][b]==tab[1][1] && tab[1][1]==var && winCheck==0)
					{
						tab2[a][b]=var;
						winCheck = 1;
					}
				}
			} //sprawdzenie czy jest mo¿liwe zaznaczenie w tablicy odwrotnej pola tab by uzyskac wygrana w tej turze 
			
			if(winCheck==0)
			{
				
				for(int a=0;a<3;a++)
				{
					for(int b=0;b<3;b++)
					{
						if(a==1 && b==1)
						continue;
						if(tab[a][b]==tab[1][1] && tab[1][1]!=var && tab[1][1]!=0 && loseCheck==0)
						{
							tab2[a][b]=var;
							loseCheck = 1;
						}
					}
				} 
				
			}// sprawdzenie czy istnieje mozliwosc aby przeciwnik wygral w nastepnej turze
			
			if(loseCheck==0)
			{
				
				for(int a=0;a<3;a++)
				{
					for(int b=0;b<3;b++)
					{
						if(tab[a][b]==0 && randomMatch==0)
						{
							tab2[2-a][2-b]=var;
							randomMatch=1;
						}
					}
				} 
				
			}// zaznaczenie pierwszego wolnego pola 
			
			for(int a=0;a<3;a++)
			{
				for(int b=0;b<3;b++)
				{
					tab[a][b]=tab2[2-a][2-b];
				}
			}	
			}
	}


char Plansza::ustalZnak(int zn)
{
		if(zn==1) return 'X';
			if(zn==2) return 'O';
			else return ' ';
	
}// f-cja zwraca znak na podstawie liczyby otrzymanej z macierzy

void Plansza::rysujPlansze(int tab[3][3])
{
	char znak = 'O';
	cout<<"\n";
	
	for(int i=0;i<3;i++)
		{
			
			cout<<" "<< ustalZnak(tab[i][0]) <<" | "<< ustalZnak(tab[i][1]) <<" | "<< ustalZnak(tab[i][2]) <<" \n";
			if(i<2)
			cout<<"-----------\n";
		}
   
}// f-cja rysujaca plansze do gry oraz pokazujaca aktualnuie zajete pola 
