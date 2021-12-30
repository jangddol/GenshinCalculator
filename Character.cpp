#include <iostream>
#include <cassert>
#include <vector>

using namespace std;


class Character{
	protected:
		double BaseATK90;
		double BaseDEF90;
		double BaseHP90;
		double AscensionATK90;
		double AscensionDEF90;
		double AscensionHP90;
		double SpecFunction(vector<double> StatVector);

};
