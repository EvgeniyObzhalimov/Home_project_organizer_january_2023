#pragma once
#include<fstream>
#include<iostream>
#include<string>

void File_read() {
	
	std::ifstream fin;
	std::string path = "organizer.txt";
	fin.open(path);
	if (!fin.is_open()) {
		std::cout << "error";
	}
	else{
		std::cout << "you have succesfull" << "\n";
		std::string st;
		while (!fin.eof()) {
			
			/*fin.open(path, std::ios_base::in);*/
			std::getline(fin, st, '\0');
			std::cout << std::endl;
		}
		}
	fin.close();
}
