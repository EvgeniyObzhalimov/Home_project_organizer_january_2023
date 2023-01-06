/*Задание 2
Пргорамма - органайзер. 
На ваш выбор программа организует и хранит записи на схожую
тематику: рецепты, дена на день, заметки по датам... 
Программа должна предоставлять
пользователю возможность:
1. выводить на экран записи по запросу;

2. добавлять новые записи;
3. изменять имеющиеся;
4. удалять записи по требованию.
Бонусы:
1. Посик записей по содержимому;
2. Шифрованное хранение записей.
*/

#include<iostream>
#include<chrono>
#include<ctime>
#include<fstream>
#include"topics.h"
#include"Read_file.h"
#include"record_file.h"
#include<vector>

//void Current_date() {
//	/*time_t now_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());*/
//	auto now = std::chrono::system_clock::now();
//	std::time_t end_time = std::chrono::system_clock::to_time_t(now);
//
//	std::cout << "Current Time and Date: " << std::ctime(&now) << std::endl;
//}



//std::string topic(std::string str) {
//	char theme[250]{};
//	for (size_t i = 0; i < 250; i++) {
//		std::cin >> theme;
//	}
//	str = theme;
//	return str;
//	}
int main(int argc, char* argv[]) {
	/*Current_date();*/
	//time_t now_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()); 
	//auto now = std::chrono::system_clock::now();
	///*std::time_t end_time = std::chrono::system_clock::to_time_t(now)*/;
	//std::cout << "Current Time and Date: " << std::ctime(&now_time) << std::endl;

	std::string str;
	std::cout << "enter the notice: " << std::endl;
	std::cin >> str;
	std::cout << std::endl;
	std::cout << "saving changes "; 
	File_create(str);
	std::cout << "show topics "<<std::endl;
	File_read();
	std::cout << std::endl;
	

	
	return 0;


}


