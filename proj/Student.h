#pragma once
#include "Faculty.h"
#include <string>
using namespace std;
class Student
{
public:
	string firstName;
	string name;
	string lastName;	
private:
	int age;
	int height;
	string colorOfEyes;
	string colorOfHair;
	Faculty* sfaculty;	
};

