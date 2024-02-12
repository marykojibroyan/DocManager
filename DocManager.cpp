#include "DocManager.h"
#include "fstream"
#include <iostream>

void DocManager::create()
{
	std::fstream myFile;
	std::string fileName;
	std::cout << "please enter the file's name: " << std::endl;
	std::getline(std::cin, fileName);

	myFile.open(fileName, std::ios::out);
	files.push_back(fileName);
	myFile.close();
}

void DocManager::edit(const std::string& context)
{
	std::fstream myFile;
	myFile.open("task.txt", std::ios::app);
	myFile<<context;
	myFile.close();
}

void DocManager::view()
{
	std::fstream files;
	files.open("task.txt",std::ios::in);
}

void DocManager::show()
{
	for (int i = 0; i < files.size(); ++i)
	{
		std::cout << files[i] << std::endl;
	}
}
