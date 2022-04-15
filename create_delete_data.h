#pragma once
#include "libs.h"
#include "Trasport_class.h"
#include "create_table.h"

class Create_Delete_Data //класс, который создаёт новые записи изменяет и может удалять их.
{
public:
	Create_Delete_Data() {};
	void Create_Data(std::vector<Transport>& obj); //функция создания новых записей
	void Change_Data(std::vector<Transport>& obj); //функция изменения информации об объектах
	void Delete_Data(std::vector <Transport>& arr_obj); //функция удаления объектов
	~Create_Delete_Data();

private:

};

