#include "ManazerSlov.h"



ManazerSlov::ManazerSlov()
{
	for (int i = 1; i < 51; ++i)
	{
		m_pole_zoznamov.insert(std::make_pair(i, std::vector<Slovo*>()));
	}
}

void ManazerSlov::nacitajSlova()
{
	std::ifstream inputFile("slovicka.txt");
	while (!inputFile.eof())
	{
		Slovo * temp = new Slovo();
		inputFile >> temp;
		this->vlozSlovoDoPola(temp);
	}
}
void ManazerSlov::vlozSlovoDoPola(Slovo * temp)
{
	m_pole_zoznamov.find(temp->getLenght())->second.push_back(temp);
}

void ManazerSlov::vypisDoSuboru()
{
	std::ofstream outputFile("Vystup.txt");
	for (auto &temp : m_pole_zoznamov)
	{
		outputFile << temp.first << ": " << temp.second.size() << std::endl;
	}
}

void ManazerSlov::slovaSPoctomPismen()
{
	int pocetPismen = -1;
	while (true)
	{
		std::cout << "Zadajte pocet pismen, slova: ";
		std::cin >> pocetPismen;
		if (pocetPismen > 0 && pocetPismen < 51)
		{
			break;
		}
		else
		{
			std::cout << "Zadali ste nespravny pocet pismen!" << std::endl;
			pocetPismen = -1;
		}
	}
	auto temp = m_pole_zoznamov.find(pocetPismen)->second;
	if (temp.size())
	{
		for (auto & slovo : temp)
		{
			std::cout << slovo << std::endl;
		}
	}
	else
	{
		std::cout << "V poli sa nenachadzaju slova s takymto poctom pismen!" << std::endl;
	}
}


ManazerSlov::~ManazerSlov()
{
	for (auto &temp : m_pole_zoznamov)
	{
		for (auto &slovo : temp.second)
		{
			delete slovo;
		}
	}
}
