#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

vector<string> split(string str, char delimiter);

vector<string> split(string input, char delimiter)
{
	vector<string> Answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)){
		Answer.push_back(temp);
	}
	
	return Answer;
}
