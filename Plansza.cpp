#include "Plansza.h"
#include <iostream>

using namespace std;
char Plansza::ustalZnak(int zn)
{
		if(zn==1) return 'X';
			if(zn==2) return 'O';
			else return ' ';
	
}

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
   
}
