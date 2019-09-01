#include "DllDriver.h"
#include <string>
#include <sstream>

DllDriver::DllDriver() {
	std::ifstream inFile;
	inFile.open("data.txt");
	int el;
	while (!inFile.eof()) {
		inFile >> el;
		m_list.insert(el);
	}
}
void DllDriver::run()
{

	while (m_quit == false) {
		printMenu();
		std::cin >> m_selection;
		if (m_selection == 1) {
			insert();
		}
		else if (m_selection == 2) {
			dllDelete();
		}
		else if (m_selection == 3) {
			smallest();
		}
		else if (m_selection == 4) {
			largest();
		}
		else if (m_selection == 5) {
			average();
		}
		else if (m_selection == 6) {
			merge();
		}
		else if (m_selection == 7) {
			print();
		}
		else if (m_selection == 8) {
			reverse();
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

void DllDriver::insert()
{
	int el;
	std::cout << "Enter an element to be inserted: ";
	std::cin >> el;
	m_list.insert(el);
}

void DllDriver::dllDelete()
{
	int num;
	std::cout << "Enter the number to be deleted: ";
	std::cin >> num;
	m_list.dllDelete(num);
}

void DllDriver::smallest()
{
	std::cout << "The smallest element is: " << m_list.smallest() << std::endl;
}

void DllDriver::largest()
{
	std::cout << "The largest element is: " << m_list.largest() << std::endl;
}
void DllDriver::average()
{
	std::cout << "The average element is: " << m_list.average() << std::endl;
}

DoublyLinkedList DllDriver::extractInt(std::string uString) {
	std::stringstream ss;
	DoublyLinkedList list;
	ss << uString;
	std::string temp;
	int n;
	while (!ss.eof()) {
		ss >> temp;
		if (std::stringstream(temp) >> n) {
			list.insert(n);
		}
		temp = " ";
	}
	return(list);
}

void DllDriver::merge()
{
	std::string uStr;
	std::cout << "Enter a list to be merged: ";
	std::cin.ignore();
	std::getline(std::cin, uStr);
	DoublyLinkedList list = extractInt(uStr);
	m_list = m_list.merge2Lists(list);
}

void DllDriver::print()
{
	m_list.print();
	std::cout << std::endl;
}

void DllDriver::reverse()
{
	m_list.reverseList();
}

