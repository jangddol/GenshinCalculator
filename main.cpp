#include <iostream>
#include "Coefficient_Calculator.h"
#include <cmath>

using namespace std;

int main(){
	int CharLevel = 91;
	int MobLevel = 100;

	CharLevel = 90;
	MobLevel = 101;

	double Coeflvl = CoefCal::Coef_Level(CharLevel, MobLevel);
	cout << "First Answer (MobLevel Assert) : " << Coeflvl << endl;
	
	return 0;
}
