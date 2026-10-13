#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main()
{
    Person person1("Daniel Gray", 27, "Blue Sky St 233 #56");
	std::cout << "person1: " << person1 << std::endl;


	std::cout << "--------------------" << std::endl;

	Player player;
	player.m_full_name = "Samuel Jackson";
	//player.m_age = 45; Compiler error
	//player.get_address = "Hollywood Blvd 23 #45"; // Compiler error

	std::cout << "---------------------" << std::endl;

	Nurse nurse1;
	//nurse1.m_full_name = "Mary Jane"; // Compiler error
	//nurse1.m_age = 51; // Compiler error

	std::cout << "---------------------" << std::endl;
	Engineer engineer1;
	//engineer1.m_full_name = "Bob Smith"; // Compiler error
	//engineer1.m_age = 23; // Compiler error

    return 0;
}