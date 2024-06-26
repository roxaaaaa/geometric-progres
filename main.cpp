#include "Progresia.h"
#include <fstream>
#include <vector>
#include <algorithm>
void n12(Geom* g) {
	cout << g->bn(12) << endl;

}
float totals;
int main()
{
	vector<Geom*> pog;
	ifstream file("file.txt");
	char x;
	while (file >> x) {
		switch(x) {
			case '1': {
				Geom* g = new Geom;
				file >> *g;
				pog.push_back(g);
				break;
			}case '2': {
				Spad* g = new Spad;
				file >> *g;
				totals += g->full_s();
				if(g->is_spad() == 1) pog.push_back(g);
				break;
			}
		}
		
	}
	for (const auto& i : pog) {
			i->print();
		}
	file.close();
	for_each(pog.begin(), pog.end(), n12);
	cout << totals;
}

