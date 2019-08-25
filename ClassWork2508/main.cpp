#include <iostream>
#include <string>
#include <map>
#include <exception>
#define Line cout<<"___________________\n";
using namespace std;
int main()
{
	map<string, string> cities;
	multimap<string, string> cities2;
	cities["Rivne"] = "33001";
	cities["Lviv"] = "22003";
	cities["Dnipro"] = "99008";
	cities["Kyiv"] = "77008";
	for (auto el : cities)
	{
		cout << el.first << " --- " << el.second << endl;
	}
	Line
	try
	{
		string city;
		cout << "Enter city: ";
		cin >> city;
		cout << "Value: " << cities.at(city) << endl;
	}
	catch (exception &msg)
	{
		cout << msg.what() << endl;
	}
	Line
	auto it = cities.find("Lviv");
	if (it != cities.end())
	{
		cout << "Found: " << it->second << endl;
	}
	else
	{
		cout << "Not found!" << endl;
	}
	Line
	cities["Lviv"] = "12345";
	for (auto el : cities)
	{
		cout << el.first << " --- " << el.second << endl;
	}
	Line
	cities.erase("Rivne");
	for (auto el : cities)
	{
		cout << el.first << " --- " << el.second << endl;
	}
	system("pause");
	return 0;
}