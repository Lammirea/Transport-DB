#include "create_table.h"
void CreateTable::print_fill_table(std::vector<Transport>& table_obj)
{
	std::string textID = "Идентификационный номер", textType = "Тип транспортного средства", textBrand = "Марка", textModel = "Модель", textYear = "Год выпуска",
		textWeight = "Вес в тоннах";
	for (int i = 0; i < textID.size() + textType.size() + textBrand.size() + textModel.size() + textYear.size() + textWeight.size() + 28; i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl; std::cout << std::endl;
	std::cout << "    " << textID << "\t" << textType << "\t" << textBrand << "\t" << textModel << "\t" << textYear << "\t" << textWeight << "\t" << "\n";
	std::cout << std::endl;
	for (int i = 0; i < textID.size() + textType.size() + textBrand.size() + textModel.size() + textYear.size() + textWeight.size() + 28; i++)
	{
		std::cout << "-";
	}
	for (unsigned i = 0; i < table_obj.size(); i++)
	{
		std::cout << std::setw(20) << table_obj[i].Get_TransportId_info() << "\t\t" << table_obj[i].Get_TransportType_Info() << "\t\t" << table_obj[i].Get_TransportBrand_info() << "\t\t" <<
			table_obj[i].Get_TransportModel_Info() << "\t\t" << table_obj[i].Get_TransportWeight_info() << "\t\t" << table_obj[i].Get_YearMade_info() << "\t\t" << "\n\n";
	}
	for (int i = 0; i < textID.size() + textType.size() + textBrand.size() + textModel.size() + textYear.size() + textWeight.size() + 28; i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl;
}

CreateTable::~CreateTable()
{
}