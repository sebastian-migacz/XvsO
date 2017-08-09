#include "Menu.h"
#include <iostream>

using namespace std;


void Menu::wyswietlPodpisyMenu()
{
	cout<<"\n     Gra w kolko i krzyzyk\n-------------------------------------\n    MENU\n";
	cout<<"     1- Nowa Gra\n     0- Wyjscie\n"; 
}//f-cj wyswietla menu

void Menu::gra()
{
	
}

void Menu::uruchomMenu()
{
	bool toExit=0;
	int control=0;
	char controlTemp=0;
	
	
	
	do
	{
		system("cls");
		this->wyswietlPodpisyMenu();
		cin>>control;
		switch(control)
		{
			case 1:
				system("cls");
					
				do
				{
					
					cout<<"\n\n  Czy na pewno chcesz rozpocz¹æ nowa gre? [y/n]\n";
					cin>>controlTemp;
				
					if(controlTemp=='y' || controlTemp=='Y')
						{
							
						}
					else if(controlTemp=='n' || controlTemp=='N')
						{
							
						}
					else if(controlTemp!='n' && controlTemp!='N' && controlTemp!='t' && controlTemp!='T')
						{
						system("cls");
						cout<<"\n\n  Musisz wpisac {n/N}- aby cofnac do menu    lub {y/Y}- aby wejsc dalej ";
						}
						
				}while(controlTemp!='n' && controlTemp!='N' && controlTemp!='y' && controlTemp!='Y');
				
			break;
			
			case 2:
			
			break;
			
			case 0:
				system("cls");
					
				do
				{
					
					cout<<"\n\n  Czy na pewno chcesz wyjsc? [y/n]\n";
					cin>>controlTemp;
				
					if(controlTemp=='y' || controlTemp=='Y')
						{
							exit(0);	
						}
					else if(controlTemp=='n' || controlTemp=='N')
						{
						}
					else if(controlTemp!='n' && controlTemp!='N' && controlTemp!='t' && controlTemp!='T')
						{
						system("cls");
						cout<<"\n\n  Musisz wpisac {n/N}- aby cofnac do menu    lub {y/Y}- aby wejsc dalej ";
						}

				}while(controlTemp!='n' && controlTemp!='N' && controlTemp!='y' && controlTemp!='Y');

			break;
		}
			
		
		
		
	}while(toExit==false);
}// struktura menu
