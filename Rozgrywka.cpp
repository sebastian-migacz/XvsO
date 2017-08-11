#include "Rozgrywka.h"
#include "Gracz.h"
#include <iostream>
#include <string>

using namespace std;


void Rozgrywka::runda(Gracz player1, Gracz player2)
{
	
	
}


void Rozgrywka::gra()
{
	bool toExitTemp=0;
	int controler=0;
	
	system("cls");
	string nazwaGracza;
	cout<<"\n\n     Podaj nazwe pierwszego Gracza.\n";
	cin>>nazwaGracza;
	
	Gracz GraczPierwszy(nazwaGracza);
	
	cout<<"\n\n     Podaj nazwe drugiego Gracza.\n";
	cin>>nazwaGracza;
	Gracz GraczDrugi(nazwaGracza);
	

	do
	{
		system("cls");
		cout<<"\n\n";
		GraczPierwszy.wyswietl();
		GraczDrugi.wyswietl();
		cout<<"\n\n";
		
		if(controler==0)
			{
				cout<<"\n     Gra w kolko i krzyzyk\n-------------------------------------\n";
				cout<<"     1- Graj\n     0-Wyjscie\n\n";
				
				do
				{
					cin>>controler;
					if(controler!=1 && controler!=0)
					cout<<"    Wpisz 1 lub 0 !!!!!!\n";
				}while(controler!=1 && controler!=0);
				
			}
			
		switch(controler)
		{
			case 0:
				toExitTemp=1;
			break;
			
			case 1:
				
				cout<<"\n\n     Który gracz zaczyna?\n";
				cout<<"     1- "<<GraczPierwszy.getName()<<endl;
				cout<<"     2- "<<GraczDrugi.getName()<<endl;;
				short int controler2;
				do
				{
					cin>>controler2;
					if(controler2!=1 && controler2!=2)
					cout<<"    Wpisz 1 lub 2 !!!!!!\n";
				}while(controler2!=1 && controler2!=2);
				
				if(controler2==1)
				{
					
				}
				
				if(controler2==2)
				{
					
				}
				 
				
				
			break;
		}
		
		
		
		
		
	}while(toExitTemp==0);
	

	cout<<"\n     Gra w kolko i krzyzyk\n-------------------------------------\n    MENU\n";
}
