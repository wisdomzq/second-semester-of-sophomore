#include <string>
#include <fstream>
#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    
    ofstream out1("File1.txt");
	ofstream out2("File2.txt");
	vector<string> v;
    string s;
    while (cin >> s)
	{
		v.push_back(s);
    }
	for (int i = 0; i < v.size(); i++)
		out1 << v[i] << endl;
	out1.close();
	ifstream in1("File1.txt");
	while (getline(in1, s))
	{
		out2 << s << endl;
		cout << s << endl;
	}
    return 0;
}