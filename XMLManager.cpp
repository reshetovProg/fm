#include "XMLManager.h"

string* XMLManager::readFile(string path)
{
	string* array;
	string buf;
	int counter = 0;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buf)) {
			addString(array, buf, counter++);
		}
	}
	in.close();
	sizeArray = counter;
	return array;
}

void XMLManager::writeFile(string path, string* array, int size)
{
	ofstream out(path);
	for (int i = 0; i < size; i++) {
		out << array[i] << "\n";
	}
	out.close();
}

int XMLManager::getSizeArray()
{
	return sizeArray;
}

void XMLManager::addString(string*& array, string str, int sizeArray)
{
	string* buf = new string[sizeArray + 1];
	for (int i = 0; i < sizeArray; i++) {
		buf[i] = array[i];
	}
	buf[sizeArray] = str;
	delete[]array;
	array = buf;
}
