#pragma once
#include <string>
using namespace std;
class Human
{
private:
public:
	int Age;
	string Name;
	string Height;
	int Weight;
	string HairColor;
	Human(int, string, string, int, string);
	~Human();

	// member function definitions
	string go_to_school();
	string sleep();
	string eat();
	string output_description();
	string transportation();

	int get_age(void);

	void set_age(int age);

	string get_name(void);

	void set_name(string name);

	string get_height(void);

	void set_height(string height);

	int get_weight(void);

	void set_weight(int weight);

	string get_hair_color(void);

	void set_hair_color(string hair_color);
};

