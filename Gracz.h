#ifndef GRACZ_H
#define GRACZ_H
#include <string>
using namespace std;

class Gracz
{
	public:
		Gracz();
		Gracz(string nameTemp);
		~Gracz();
		void addPkt();
		void wyswietl();
		string getName();
		int getPkt();
		
	protected:
		int pkt;
		string name;
};

#endif
