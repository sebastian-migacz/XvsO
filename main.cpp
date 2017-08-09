
#include <iostream>
#include <string>
#include "Plansza.h"
#include "Menu.h"
#include "Gracz.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int ukladNaPlanszy[3][3];
int main(int argc, char** argv) {
	
	
	
	Plansza nowa;
	Menu menuGry;
	menuGry.uruchomMenu();
	nowa.czyscPlansze(ukladNaPlanszy);
	return 0;
}
