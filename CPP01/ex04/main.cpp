#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::stringstream;

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Usage: ./Sed [string1] [string2] [string3]" << endl;
		return 1;
	}
	string filename = argv[1];
	string s1 = argv[2];
	string s2 = argv[3];
	string rtn;

	ifstream file(filename);
	if (!file.is_open())
	{
		cout << "Error: could not open file" << endl;
		return 1;
	}
	stringstream buffer;
	buffer << file.rdbuf();
	string content = buffer.str();
	file.close();
	size_t pos = 0;
	while (true)
	{
		pos = content.find(s1, 0);
		if (pos == string::npos || s1 == "")
			break;
		rtn += content.substr(0, pos);
		rtn += s2;
		content = content.substr(pos + s1.length());
	}
	rtn += content;
	ofstream newfile(filename + ".replace");
	newfile << rtn;
	newfile.close();
	cout << "File " << filename << " has been replaced and saved as " << filename + ".replace" << endl;
	return 0;
}