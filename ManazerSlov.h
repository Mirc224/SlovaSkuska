#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "Slovo.h"
class ManazerSlov
{
public:
	ManazerSlov();
	void nacitajSlova();
	void vypisDoSuboru();
	void slovaSPoctomPismen();
	virtual ~ManazerSlov();
private:
	std::map<int, std::vector<Slovo*> >m_pole_zoznamov;
	void vlozSlovoDoPola(Slovo* temp);
};

