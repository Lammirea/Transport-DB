#pragma once
#include "libs.h"
#include "Trasport_class.h"
#include "create_table.h"

class Sort_Search_Info //�����, ������� ��������� ������ �� ���������� ����, � ����� ���� ������ ������. 
{
public:
	Sort_Search_Info() {};
	void Search_Needed(std::vector<Transport>& obj);
	void Sort_Needed(std::vector<Transport>& obj);
	~Sort_Search_Info();

private:

};


