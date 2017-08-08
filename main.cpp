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
	
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<< ukladNaPlanszy[i][j];
	}


	Plansza nowa;
	nowa.rysujPlansze(ukladNaPlanszy);
	cout<<"\nzaczynamy\n";
	return 0;
}
