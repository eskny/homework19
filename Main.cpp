#include <iostream>

class Animal
{
public:
	virtual void Voice()
	{
		std::cout << "string with text" << std::endl;
	}
};

class Dog :public Animal
{
public:
	void Voice() override
	{
		std::cout << "Woof" << std::endl;
	}

};

class Cat :public Animal
{
public:
	void Voice() override
	{
		std::cout << "Meow" << std::endl;
	}

};

class Cow :public Animal
{
public:
	void Voice() override
	{
		std::cout << "Moooo" << std::endl;
	}

};

int main()
{
	/*Dog d;
	d.Voice();*/

	Animal* arr[3];
	arr[0] = new Dog();
	arr[1] = new Cat();
	arr[2] = new Cow();

	for (int i = 0; i < 3; i++)
	{
		arr[i]->Voice();
	}
}