#include "pch.h"
#include "Human.h"
using namespace std;

Human::Human(int age, string name, string height, int weight, string hair_color)
{
	Age = age;
	Name = name;
	Height = height;
	Weight = weight;
	HairColor = hair_color;
}

Human::~Human()
= default;

string Human::go_to_school()
{
	string school = "walk to school";
	return school;
}

string Human::sleep()
{
	string sleeps = "sleep";
	return sleeps;
}

string Human::eat()
{
	string eats = "eat";
	return eats;
}

string Human::transportation()
{
	string eats = "drive a car";
	return eats;
}

int Human::get_age()
{
	return Age;
}

void Human::set_age(int age)
{
	Age = age;
}

string Human::get_name()
{
	return Name;
}

void Human::set_name(string name)
{
	Name = name;
}

string Human::get_height()
{
	return Height;
}

void Human::set_height(string height)
{
	Height = height;
}

int Human::get_weight()
{
	return Weight;
}

void Human::set_weight(int weight)
{
	Weight = weight;
}

string Human::get_hair_color()
{
	return HairColor;
}

void Human::set_hair_color(string hair_color)
{
	HairColor = hair_color;
}

string Human::output_description()
{
	auto human_description = "The " + this->get_height() + " humans first name is "
		+ this->get_name() + " and is " + std::to_string(this->get_age())
		+ " years old with " + this->get_hair_color() + " colored hair and weighs "
		+ std::to_string(this->get_weight()) + " pounds. The human can: "
		+ this->go_to_school() + ", " + this->sleep() + ", " + this->eat()
		+ " and " + this->transportation() + ".";
	return human_description;
}

