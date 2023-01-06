#pragma once
#include<fstream>
#include<string>
#include<iostream>
void File_create(std::string& str) {

	std::ofstream fout;
	std::string path = "organizer.txt";
	fout.open(path, std::ofstream::app);
	if (!fout.is_open()) {
		std::cout << "error" << std::endl;
	}
	else {
		fout << "\n" << str;
		std::cout << std::endl;
	}
	fout.close();
}