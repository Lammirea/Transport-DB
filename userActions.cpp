#include "userActions.h"
void UserActions::ChooseActions()
{
	std::string choice, CarType, CarModel, CarBrand;
	int CarAmount = 0, CarId = 0, YearMade = 0, contin = 1;
	int* p;
	double CarWeight = 0;
	std::vector<Transport> obj;
	Create_Delete_Data cre_del;
	while (contin == 1) {
		std::cout << "�������� ��������:" << "\n" << "�������� - ������� �� ����� C" << "\n" << "�������������� - ������� �� ����� �" << "\n" << "�������� - ������� �� ����� �" << "\n"
			<< "����������� ����� ������ � ����������� �� ���������� ���� - ������� �� ����� �" << "\n" << "����� �� ���������� ���� - ������� �� ����� �" << "\n"
			<< "���������� ���� ������� � ���� - ������� �� ����� �" << "\n" << "�������� ���� ������� �� ����� - ������� �� ����� �\n" << "����� ���� ������ � ������� - ������� ����� �" << std::endl;
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == "�" || choice == "�")
		{
			cre_del.Create_Data(obj);
			//object.Set_all_CarInfo();
		}
		else if (choice == "�" || choice == "�")
		{
			cre_del.Change_Data(obj);
		}
		else if (choice == "�" || choice == "�")
		{
			cre_del.Delete_Data(obj);
		}
		else if (choice == "�" || choice == "�")
		{
			//���������� �� ��������, �����������, �� � �� � � ��������
			Sort_Search_Info sort;
			sort.Sort_Needed(obj);
		}
		else if (choice == "�" || choice == "�")
		{
			Sort_Search_Info search;
			search.Search_Needed(obj);
		}
		else if (choice == "�" || choice == "�")
		{
			AcionsWithTxtFile input_obj;
			input_obj.input(obj);
		}
		else if (choice == "�" || choice == "�")
		{
			AcionsWithTxtFile output_obj;
			output_obj.output();
		}
		else if (choice == "�" || choice == "�")
		{
			CreateTable table_obj;
			table_obj.print_fill_table(obj);
		}

		std::cout << "����������? (yes - 1)" << std::endl;
		std::cin >> contin;
	}
}

UserActions::~UserActions()
{
}