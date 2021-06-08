#include "ToHtml.h"
#include "windows.h"

void toHtml(string path, string filename, vector<string> styleSheets, vector<string> links, vector<string> data)
{
	fstream file;
	file.open(path + "\\" + filename + ".html", fstream::out, fstream::trunc);
	if (file.is_open())
	{
		file
			<< "<HTML>\n"
			<< "<HEAD>\n"
			<< "<META NAME = \"GENERATOR\" Content = \"Microsoft  Visual Studio\">\n"
			<< "<TITLE>" + filename + "</TITLE>\n";

		for (size_t i = 0; i < styleSheets.size(); i++)
			file << "<LINK rel = \"stylesheet\" type = \"text/css\" href = \"" << path + "\\" + styleSheets[i] + ".css" << "\">\n";

		file
			<< "</HEAD>\n"
			<< "<BODY>\n"
			<< "\n"
			<< "<p> Hello World </p>\n\n";

		for (size_t i = 0; i < links.size(); i++)
			file << "<a href = \"" + links[i] + ".html\">" + links[i] + "</a>\n";

		for (size_t i = 0; i < data.size(); i++)
			file << "<p>" << data[i] << "</p>\n";

		file
			<< "\n"
			<< "</BODY>\n"
			<< "</HTML>\n";

		file.close();
	}
}

void toCss(string path, string filename, vector<string> data)
{}