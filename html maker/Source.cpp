#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "ToHtml.h"

using namespace std;

int main()
{
	vector<string> links, data, styleSheets;
	string path = "D:\\Websites\\C++ToHtml";

	vector<int> intData;
	vector<string> stringData;
	vector<string> cssData;

	size_t temp;
	int temp2;
	string temp3;

	data.clear();

	links.push_back("index");
	links.push_back("intData");
	links.push_back("stringData");

	cssData.push_back("BODY\n");
	cssData.push_back("{\n");
	cssData.push_back("	background-color: rgb(193, 217, 185);\n");
	cssData.push_back("	color: rgb(48, 24, 72);\n");
	cssData.push_back("	font-size: medium;\n");
	cssData.push_back("}\n");

	styleSheets.push_back("StyleSheet");

	toCss(path, styleSheets[0], cssData);

	toHtml(path, links[0], styleSheets, links, data);

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

	for (size_t i = 0; i < temp - 1; i++)
	{
		for (size_t j = 0; j < temp - i - 1; j++)
		{
			if (intData[j] > intData[j+1])
			{
				int t = intData[j];
				intData[j] = intData[j + 1];
				intData[j + 1] = t;
			}
		}
	}

	data.push_back("");

	for (size_t i = 0; i < intData.size(); i++)
		data.push_back(to_string(intData[i]));

	toHtml(path, links[1], styleSheets, links, data);
	data.clear();

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

	toHtml(path, links[2], styleSheets, links, data);
}