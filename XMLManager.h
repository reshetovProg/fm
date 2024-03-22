#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class XMLManager
{
private:
	int sizeArray;
public:
	string* readFile(string path);
	void writeFile(string path, string* array, int size);
	int getSizeArray();
private:
	void addString(string*& array, string str, int sizeArray);
};

