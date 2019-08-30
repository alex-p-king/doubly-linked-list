#include "DllDriver.h"
#include <string>
#include <vector>


void DllDriver::run()
{

	while (m_quit == false) {
		printMenu();
		std::cin >> m_selection;
		if (m_selection == 1) {
			option1();
		}
		else if (m_selection == 2) {
			option2();
		}
		else if (m_selection == 3) {
			option3();
		}
		else if (m_selection == 4) {
			option4();
		}
		else if (m_selection == 5) {
			option5();
		}
		else if (m_selection == 6) {
			option6();
		}
		else if (m_selection == 7) {
			option7();
		}
		else if (m_selection == 8) {
			option8();
		}
		else if (m_selection == 9) {
			m_quit = true;
		}
		else {
			std::cout << "Invalid input" << "\n";
		}
	}
}
void DllDriver::printMenu() 
{
	std::cout << "Choose one operation from the options below" << "\n\n";
	std::cout << "1. " << "Insert\n";
	std::cout << "2. " << "Delete\n";
	std::cout << "3. " << "Find smallest number\n";
	std::cout << "4. " << "Find largest number\n";
	std::cout << "5. " << "Average of numbers\n";
	std::cout << "6. " << "Merge 2 Lists\n";
	std::cout << "7. " << "Print\n";
	std::cout << "8. " << "Reverse List\n";
	std::cout << "9. " << "Exit\n";
}

void DllDriver::option1()
{
	int el;
	std::cout << "Enter an element to be inserted: ";
	std::cin >> el;
	m_list.insert(el);
}

void DllDriver::option2()
{
	int num;
	std::cout << "Enter the number to be deleted: ";
	std::cin >> num;
	m_list.dllDelete(num);
}

void DllDriver::option3()
{
	std::cout << "The smallest element is: " << m_list.smallest() << std::endl;
}

void DllDriver::option4()
{
	std::cout << "The largest element is: " << m_list.largest() << std::endl;
}
void DllDriver::option5()
{
	std::cout << "The average element is: " << m_list.average() << std::endl;
}

void DllDriver::option6()
{
	bool quit = false;
	char cont = 'y';
	DoublyLinkedList list;
	int el;
	while (quit == false) {
		std::cout << "Enter a number to add to the second list: ";
		std::cin >> el;
		std::cout << "continue ? (y/n): ";
		std::cin >> cont;
		if (cont == 'n') {
			quit = true;
		}
		else {
			list.insert(el);
		}
	}
	DoublyLinkedList mergedList = m_list.merge2Lists(list);
	mergedList.print();
	
}

void DllDriver::option7()
{
	m_list.print();
}

void DllDriver::option8()
{
	m_list.reverseList();
}
