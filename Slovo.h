#pragma once
#include <iostream>
class Slovo
{
public:
	Slovo();
	friend std::istream& operator >>(std::istream& is, Slovo* b)
	{
		b->nacitaj(is); return is;
	}
	friend std::ostream& operator <<(std::ostream& os, Slovo* b) 
	{
		b->vypis(os); return os;
	}
	int getLenght();
	void vypis(std::ostream& os);
	void nacitaj(std::istream& is);
	virtual ~Slovo();
private:
	char m_slovo[51];
};

