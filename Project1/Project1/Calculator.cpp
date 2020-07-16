#include <cstdio>
#include <iostream>
#include <string>

int first_input = 0;
int second_input = 0;
int choice = 1;
std::string input;
int restart = 0;

void check_digit(std::string input);
int main()
{
	

	while (choice != 0)
	{
		std::cout << "Enter an integer to choose: \n 1: Addition \n 2: Subtraction \n 3: Multiplication \n 4: Division \n 0: quit" << std::endl;
		std::getline(std::cin, input);

		check_digit(input);

		if (restart == 1)
		{
			restart = 0;
			choice = 1;
			continue;
		}

		choice = std::stoi(input);

		if (choice < 0 || choice > 4)
		{
			std::cout << "Input is out of range!" << std::endl;
			continue;
		}
		if (choice == 0)
		{
			std::cout << "Good-bye" << std::endl;
			continue;
		}

		

		std::cout << "Enter first integer: " << std::endl;
		std::getline(std::cin, input);

		check_digit(input);
		
		
		if (restart == 1)
		{
			restart = 0;
			choice = 1;
			continue;
		}

		first_input = std::stoi(input);


		std::cout << "Enter second integer: " << std::endl;
		std::getline(std::cin, input);

		check_digit(input);
				
		if (restart == 1)
		{
			restart = 0;
			choice = 1;
			continue;
		}

		second_input = std::stoi(input);

		if (choice < 0 || choice > 4)
		{
			choice = 1;
			continue;
		}


		switch (choice)
		{
		case 0:
		{
			std::cout << "Good-bye" << std::endl;
			break;
		}
		case 1:
		{
			std::cout << "Result is " << first_input + second_input << std::endl;
			break;
		}

		case 2:
		{
			std::cout << "Result is " << first_input - second_input << std::endl;
			break;
		}

		case 3:
		{
			std::cout << "Result is " << first_input * second_input << std::endl;
			break;
		}

		case 4:
		{
			std::cout << "Result is " << first_input / second_input << std::endl;
			break;
		}
		}
	}
	std::cin.get();
}

void check_digit(std::string input)
{
	for (int i = 0; i < input.length();i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Not an integer. Start over" << std::endl;
			restart = 1;
			break;
		}
	}
}

