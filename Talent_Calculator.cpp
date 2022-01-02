#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <array>

using namespace std;

class ITalentCoefficient {
public:
	array<double, 15> mTalentCoefficient;
};

class Physical_1_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_1_TalentCoefficient();
};

Physical_1_TalentCoefficient::Physical_1_TalentCoefficient() {
	mTalentCoefficient = {
		1,
		1.081,
		1.163,
		1.279,
		1.36, // Level 5
		1.453,
		1.581,
		1.709,
		1.837,
		1.977, // Level 10
		2.116,
		2.256,
		2.395,
		2.535,
		2.674 // Level 15
	};
}

class Physical_1_Alternative_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_1_Alternative_TalentCoefficient();
};

Physical_1_Alternative_TalentCoefficient::Physical_1_Alternative_TalentCoefficient(){
	mTalentCoefficient = {
		1,
		1.081,
		1.163,
		1.279,
		1.36, // Level 5
		1.453,
		1.581,
		1.709,
		1.837,
		1.977, // Level 10
		2.137,
		2.325,
		2.513,
		2.701,
		2.906 // Level 15
	};
};

class Physical_2_TalentCoefficient : public ITalentCoefficient {
public:
	Physical_2_TalentCoefficient();
};

Physical_2_TalentCoefficient::Physical_2_TalentCoefficient(){
	mTalentCoefficient = {
		1,
		1.068,
		1.136,
		1.227,
		1.295, // Level 5
		1.375,
		1.477,
		1.58,
		1.682,
		1.784, // Level 10
		1.886,
		1.989,
		2.091,
		2.193,
		2.295 // Level 15
	};
};

class Elemental_1_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_1_TalentCoefficient();
};

Elemental_1_TalentCoefficient::Elemental_1_TalentCoefficient(){
	mTalentCoefficient = {
		1,
		1.075,
		1.15,
		1.25,
		1.325, // Level 5
		1.4,
		1.5,
		1.6,
		1.7,
		1.8, // Level 10
		1.9,
		2,
		2.125,
		2.25,
		2.375, // Level 15
	};
};

class Elemental_1_Alternative_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_1_Alternative_TalentCoefficient();
};

Elemental_1_Alternative_TalentCoefficient::Elemental_1_Alternative_TalentCoefficient(){
	mTalentCoefficient = {
		1,
		1.075,
		1.15,
		1.25,
		1.325, // Level 5
		1.4,
		1.5,
		1.6,
		1.7,
		1.8, // Level 10
		1.904,
		2.04,
		2.176,
		2.312,
		2.448 // Level 15
	};
};

class Elemental_2_TalentCoefficient : public ITalentCoefficient {
public:
	Elemental_2_TalentCoefficient();
};

Elemental_2_TalentCoefficient::Elemental_2_TalentCoefficient(){
	mTalentCoefficient = {
		1,
		1.06,
		1.12,
		1.198,
		1.257, // Level 5
		1.317,
		1.395,
		1.473,
		1.551,
		1.629, // Level 10
		1.707,
		1.784,
		1.862,
		1.94,
		2.018 // Level 15
	};
};

double getTalentCoefficient(int talentLevel, string talenttype) {
	ITalentCoefficient tempTalentCoefficient;
	if (talenttype == "Physical1") {
		tempTalentCoefficient = Physical_1_TalentCoefficient();
	}
	else if (talenttype == "Physical1_Alternative") {
		tempTalentCoefficient = Physical_1_Alternative_TalentCoefficient();
	}
	else if (talenttype == "Physical2") {
		tempTalentCoefficient = Physical_2_TalentCoefficient();
	}
	else if (talenttype == "Elemental1") {
		tempTalentCoefficient = Elemental_1_TalentCoefficient();
	}
	else if (talenttype == "Elemental1_Alternative") {
		tempTalentCoefficient = Elemental_1_Alternative_TalentCoefficient();
	}
	else if (talenttype == "Elemental2") {
		tempTalentCoefficient = Elemental_2_TalentCoefficient();
	}
	else {
		assert(true);
		cout << "There is no talent type such as " << talenttype << endl;
	}
	return tempTalentCoefficient.mTalentCoefficient[talentLevel];
}