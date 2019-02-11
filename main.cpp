#include <iostream>
#include "Slovo.h"
#include "ManazerSlov.h"

int main()
{
	ManazerSlov* temp = new ManazerSlov();
	temp->nacitajSlova();
	temp->vypisDoSuboru();
	temp->slovaSPoctomPismen();
	delete temp;
	return 0;
}