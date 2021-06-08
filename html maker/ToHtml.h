#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void toHtml(string path, string filename, vector<string> styleSheets, vector<string> links, vector<string> data);

void toCss(string path, string filename, vector<string> data);