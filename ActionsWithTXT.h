
#pragma once
#include "libs.h"
#include "Trasport_class.h"
#include "create_table.h"
class AcionsWithTxtFile //класс, который записывает и выводит данные файла. 
{
public:
	AcionsWithTxtFile() {};
	int input(std::vector<Transport>& obj); //запись массива данных в файл
	int output(); //вывод данных из файла
	~AcionsWithTxtFile();

private:

};
