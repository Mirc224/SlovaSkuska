#include "Slovo.h"



Slovo::Slovo()
{
}


int Slovo::getLenght()
{
	int i = 0;
	while (m_slovo[i] != 0)
	{
		++i;
	}
	return i;
}

void Slovo::vypis(std::ostream & os)
{
	os << m_slovo;
}

void Slovo::nacitaj(std::istream & is)
{

	is >> m_slovo;
	for (int i = 0; i < 51; i++)
	{
		if (m_slovo[i] == 0)
		{
			return;
		}
	}
	m_slovo[50] = 0;
}


Slovo::~Slovo()
{
}
