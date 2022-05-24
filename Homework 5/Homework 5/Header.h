#pragma once
#include <iostream>
using namespace std;

class Human {
protected:
	string Name;
public:
	Human ()
	{
		Name = "";
	}
	Human(string word)
	{
		Name = word;
	}
public:

	virtual void Hello(void) = 0;
};

class Russian : public Human {
	string Name;

public:
	Russian()
	{
		Name = "";
	}
	Russian(string word)
	{
		Name = word;
	}
	void Hello()
	{
		cout << "Привет! Я " << Name << endl;
	}
};

class English : public Human {
	string Name;

public:
	English()
	{
		Name = "";
	}
	English(string word)
	{
		Name = word;
	}
	void Hello()
	{
		cout << "Hello! I am " << Name << endl;
	}
};

class German : public Human {
	string Name;

public:
	German()
	{
		Name = "";
	}
	German(string word)
	{
		Name = word;
	}
	void Hello()
	{
		cout << "Hallo! Ich Bin " << Name << endl;
	}
};

class Chinese : public Human {
	string Name;

public:
	Chinese()
	{
		Name = "";
	}
	Chinese(string word)
	{
		Name = word;
	}
	void Hello()
	{
		cout << "Ni hao! Wo shi " << Name << endl;
	}
};