#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "ToHtml.h"

using namespace std;

int main()
{
	vector<string> links, data;
	data.clear();

	links.push_back("index");
	links.push_back("intData");
	links.push_back("stringData");

	toHtml("C:\\Users\\mssevov18\\Documents\\html", links[0], links, data);

	vector<int> intData;
	int temp2;
	size_t temp;

	cout << "Amount: ";
	cin >> temp;
	
	for (size_t i = 0; i < temp; i++)
	{
		cout << "Num[" << i + 1 << "]: ";
		cin >> temp2;
		intData.push_back(temp2);
	}

	for (size_t i = 0; i < intData.size(); i++)
		data.push_back(to_string(intData[i]));

	toHtml("C:\\Users\\mssevov18\\Documents\\html", links[1], links, data);
	data.clear();

	vector<string> stringData;
	string temp3;
	temp = 0;

	cout << "Amount: ";
	cin >> temp;
	cin.clear();

	for (size_t i = 0; i < temp; i++)
	{
		cout << "Word[" << i + 1 << "]: ";
		cin >> temp3;
		stringData.push_back(temp3);
	}

	for (size_t i = 0; i < stringData.size(); i++)
		data.push_back(stringData[i]);

	toHtml("C:\\Users\\mssevov18\\Documents\\html", links[2], links, data);
}