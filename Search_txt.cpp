#include <iostream>
#include <vector>
#include <string>

using namespace std;


string Search_Char_select_column(string Charname, int column);

string Search_Char_BaseATK90(string Charname){
	int column = 2;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer; 
}

string Search_Char_BaseDEF90(string Charname){
	int column = 3;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer;
}

string Search_Char_BaseHP90(string Charname){
	int column = 4;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer;
}

string Search_Char_AscensionATK90(string Charname){
	int column = 5;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer; 
}

string search_Char_AscensionDEF90(string Charname){
	int column = 6;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer;
}

string search_Char_AscensionHP90(string Charname){
	int column = 7;
	string Answer = Search_Char_select_column(Charname, column);
	return Answer;
}

