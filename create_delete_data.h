#pragma once
#include "libs.h"
#include "Trasport_class.h"
#include "create_table.h"

class Create_Delete_Data //�����, ������� ������ ����� ������ �������� � ����� ������� ��.
{
public:
	Create_Delete_Data() {};
	void Create_Data(std::vector<Transport>& obj); //������� �������� ����� �������
	void Change_Data(std::vector<Transport>& obj); //������� ��������� ���������� �� ��������
	void Delete_Data(std::vector <Transport>& arr_obj); //������� �������� ��������
	~Create_Delete_Data();

private:

};

