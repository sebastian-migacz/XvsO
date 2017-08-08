#include <iostream>
#include "Plansza.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
class Plansza{
	private:
		int a;
		
	public:
		void rysujPlansze()
		
			
};*/
int ukladNaPlanszy[3][3];
int main(int argc, char** argv) {
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			ukladNaPlanszy[i][j]=i+j;
	}
	


	Plansza nowa;
	nowa.rysujPlansze(ukladNaPlanszy);
	nowa.czyscPlansze(ukladNaPlanszy);
	nowa.rysujPlansze(ukladNaPlanszy);
	nowa.zaznaczPole(ukladNaPlanszy, 1, 2);
	nowa.zaznaczPole(ukladNaPlanszy, 2, 2);
	nowa.zaznaczPole(ukladNaPlanszy, 3, 2);
	nowa.zaznaczPole(ukladNaPlanszy, 4, 1);
	nowa.zaznaczPole(ukladNaPlanszy, 5, 1);
	nowa.zaznaczPole(ukladNaPlanszy, 6, 1);
	nowa.zaznaczPole(ukladNaPlanszy, 8, 2);
	nowa.rysujPlansze(ukladNaPlanszy);
	cout<<"\nzaczynamy\n";
	return 0;
}
