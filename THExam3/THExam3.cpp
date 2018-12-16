// THExam3.cpp : This file contains the 'main' function. 
// Program execution begins and ends there.
//
/*
 * Write a class – Human – that contains member variables and 
 * methods (4 each) that describe a human. 
 * Each member needs to have proper mutators and accessors. 
 * Each method should output whatever the action is to the screen. 
 * Additionally, you are to include a constructor that will initialize the member variables, 
 * and an OutputDescription method that describes the human
 *  (with its 4 members and what it can do) in sentence form. 
 * Member examples:
	Age
	Name
	Height
	Weight
	HairColor
Method Examples:
	GoToSchool()
	Sleep()
	Eat()
	OutputDescription() 
example:
	“The tall human named Chris is 45 and weighs 180 pounds. 
	The human can: walk, sleep, eat, and drive”
 */

#include "pch.h"
#include <iostream>
#include "Human.h"

int main()
{
	Human human(34, "Bob", "tall", 180, "brown");
	std::cout << human.output_description();
}

