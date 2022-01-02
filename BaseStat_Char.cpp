#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;


double LvMultiplier_BaseStat_5star(int Level) {
	double SLOPE = 0.086960472;
	double INTERCEPT = 0.856331835;
	double Answer;
	double MULTIPLIER_LEVEL1_STANDARD = SLOPE * Level + INTERCEPT;
	double MULTIPLIER_LEVEL90 = SLOPE * 90 + INTERCEPT;
	Answer = MULTIPLIER_LEVEL1_STANDARD / MULTIPLIER_LEVEL90;
	return Answer;
}


double LvMultiplier_BaseStat_4star(int Level) {
	double SLOPE = 0.08256877;
	double INTERCEPT = 0.917443196;
	double Answer;
	double MULTIPLIER_LEVEL1_STANDARD = SLOPE * Level + INTERCEPT;
	double MULTIPLIER_LEVEL90 = SLOPE * 90 + INTERCEPT;
	Answer = MULTIPLIER_LEVEL1_STANDARD / MULTIPLIER_LEVEL90;
	return Answer;
}


double LvMultiplier_BaseStat(int Level, int Star) {
	double Answer;
	if (Star == 4) {
		Answer = LvMultiplier_BaseStat_4star(Level);
	}
	else if (Star == 5) {
		Answer = LvMultiplier_BaseStat_5star(Level);
	}
	return Answer;
}


double BaseStat_foreach_Level_without_Ascension(int BaseStat90_without_Ascension, int Level, int Star) {
	return LvMultiplier_BaseStat(Level, Star) * BaseStat90_without_Ascension;
}


double BaseStat_AscensionValue(int Ascension_Phase, double Full_Ascension_Stat) {
	double Ascension_Section;
	if (Ascension_Phase == 1) {
		Ascension_Section = 38. / 182.;
	}
	else if (Ascension_Phase == 2) {
		Ascension_Section = 65. / 182.;
	}
	else if (Ascension_Phase == 3) {
		Ascension_Section = 101. / 182.;
	}
	else if (Ascension_Phase == 4) {
		Ascension_Section = 128. / 182.;
	}
	else if (Ascension_Phase == 5) {
		Ascension_Section = 155. / 182.;
	}
	else if (Ascension_Phase == 6) {
		Ascension_Section == 1;
	}
	else {
		Ascension_Section == 0;
	}
	double Answer = Full_Ascension_Stat * Ascension_Section;
	return Answer;
}


int HowMuchAscension(string Level_String) {
	int Level;
	int Ascension_Phase;
	char Last_Char;
	bool Is_Ascension;
	Last_Char = Level_String.back();
	if (Last_Char == '+') {
		Is_Ascension = true;
	}
	else {
		Is_Ascension = false;
	}
	if (Is_Ascension) {
		Level_String.resize(Level_String.size() - 1);
		stringstream tempString(Level_String);
		tempString >> Level;
	}
	else {
		stringstream tempString(Level_String);
		tempString >> Level;
	}
	if (Level <= 20) {
		Ascension_Phase = 0;
	}
	else if (Level <= 40) {
		Ascension_Phase = 1;
	}
	else {
		Ascension_Phase = Level / 10 - 3;
	}
	if (Is_Ascension) {
		Ascension_Phase++;
	}
	return Ascension_Phase;
}


int BaseStat_foreach_Level(double BaseStat90, double BaseStat90_Ascension, string Level_String, int Star) {
	double BaseStat90_without_Ascension;
	BaseStat90_without_Ascension = BaseStat90 - BaseStat90_Ascension;

	int Ascension_Phase;
	Ascension_Phase = HowMuchAscension(Level_String);

	double BaseStat_Ascension;
	BaseStat_Ascension = BaseStat_AscensionValue(Ascension_Phase, BaseStat90_Ascension);

	int Level;
	stringstream tempString(Level_String);
	tempString >> Level;

	double BaseStat_without_Ascension;
	BaseStat_without_Ascension = BaseStat_foreach_Level_without_Ascension(BaseStat90_without_Ascension, Level, Star);

	double BaseStat;
	BaseStat = BaseStat_without_Ascension + BaseStat_Ascension;
	return BaseStat;
}


int main() {
	string str1;
	cout << "write your level :" << endl;
	cin >> str1;
	cout << "The size of str1 is " << str1.size() << endl;
	int Ascension_Phase = HowMuchAscension(str1);
	cout << "The Ascension_Phase is " << Ascension_Phase << endl;
	return 0;
}
