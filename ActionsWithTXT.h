
#pragma once
#include "libs.h"
#include "Trasport_class.h"
#include "create_table.h"
class AcionsWithTxtFile //�����, ������� ���������� � ������� ������ �����. 
{
public:
	AcionsWithTxtFile() {};
	int input(std::vector<Transport>& obj); //������ ������� ������ � ����
	int output(); //����� ������ �� �����
	~AcionsWithTxtFile();

private:

};
